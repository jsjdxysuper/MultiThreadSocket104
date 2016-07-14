// stdafx.cpp : source file that includes just the standard includes
//	MultithreadT.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

BOOL ServerState = FALSE;
int ThreadNum = 0;

CMutex g_mutex(FALSE,_T("ThreadMutex"));

