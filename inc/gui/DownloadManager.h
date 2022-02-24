#pragma once

#include "RspMsgs.h"

#include <string>
#include <vector>

class CDownloadManager
{
public:
    CDownloadManager(int dataSize, std::string outFileName);
    ~CDownloadManager();

    void AppendChunk(SAirSens chunk);
    int GetPercent();

private:
    int m_dataSize;
    std::string m_outFileName;
    std::vector<SAirSens::AirSensData> m_data;
};
