#pragma once

#include <Singleton.h>
#include <string>

using namespace std;

#define g_pConf (&CConfigurator::Instance())

struct SConfig
{
    double coreRate = 20.0;
    double heartbeatRate = 2.0;
    string droneIp = "127.0.0.1";
    uint16_t dronePort = 54000;
};

class CConfigurator : public TSingleton<CConfigurator>
{
public:
    CConfigurator();
    
    bool UpdateConfig();
    SConfig GetConfig();

private:
    SConfig m_cfg;
};