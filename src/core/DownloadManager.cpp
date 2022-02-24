#include "DownloadManager.h"
#include "Log.h"

#include <fstream>

using namespace std;

CDownloadManager::CDownloadManager(int dataSize, string outFileName)
{
    m_dataSize = dataSize;
    m_outFileName = outFileName;
}

CDownloadManager::~CDownloadManager()
{
    if(m_data.empty())
    {
        CLog::Log(LOG_WARNING, "CDownloadManager: closed with no data");
        return;
    }

    CLog::Log(LOG_INFO, "CDownloadManager: saving %d data entries into '%s'...", m_data.size(), m_outFileName.c_str());

    ofstream file(m_outFileName);

    if(!file.is_open())
    {
        CLog::Log(LOG_WARNING, "CDownloadManager: cannot open file '%s'!", m_outFileName.c_str());
        return;
    }

    for(SAirSens::AirSensData pt : m_data)
    {
        file
        << pt.lat << ";"
        << pt.lon << ";"
        << pt.temp << ";"
        << pt.hum << ";"
        << pt.co << ";"
        << pt.co2 << ";"
        << pt.nh3 << ";"
        << pt.no2 << ";"
        << pt.tvoc << "\n";
    }

    CLog::Log(LOG_INFO, "CDownloadManager: saving is done!");
}

void CDownloadManager::AppendChunk(SAirSens chunk)
{
    int i = 0;
    for(; m_data.size() <= m_dataSize && i < chunk.size; ++i)
    {
        m_data.push_back(chunk.data[i]);
    }
    CLog::Log(LOG_INFO, "CDownloadManager: wrote a chunk with %d data entries | %d/%d (%d percent)",
        chunk.size, m_data.size(), m_dataSize, GetPercent());
}

int CDownloadManager::GetPercent()
{
    int curSize = m_data.size();
    if(curSize >= m_dataSize)
    {
        return 100;
    }

    return int((float(m_data.size()) / float(m_dataSize)) * 100.f);
}
