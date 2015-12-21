//+----------------------------------------------------------------------------+
//|PlginPendCfg.h     OTM  Plugin Manager Parser function                      |
//+----------------------------------------------------------------------------+
//|Copyright Notice:                                                           |
//|                                                                            |
//|          Copyright (C) 1990-2015, International Business Machines          |
//|          Corporation and others. All rights reserved                       |
//|                                                                            |
//|                                                                            |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Author:             Flora Lee                                               |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Description:        This is module contains some functions which are used   |
//|                    during plugin manager parser                            |
//+----------------------------------------------------------------------------+
//|Entry Points:                                                               |
//|                                                                            |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Internals:                                                                  |
//|                                                                            |
//+----------------------------------------------------------------------------+

#include "OpenTM2StarterComm.h"

#define PLUGIN_PENDING_LST                            "PluginPend.lst"

class CPlginPendLst
{
// private member
private:
    char m_strCfgPath[MAX_PATH];
    vector <COTMPENDING> m_grpPendings;

// public function
public:
    CPlginPendLst(void);
    CPlginPendLst(const char * strOtmPath);
    int ParseConfigFile();
    int GetPendingCnt();
    const char * GetPendingName(int nInx);
    int SetPendingResult(int nInx, int nRet);
    int RefreshPendingLst();
    ~CPlginPendLst(void);
};
