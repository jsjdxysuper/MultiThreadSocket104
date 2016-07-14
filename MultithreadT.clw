; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMultithreadTDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MultithreadT.h"

ClassCount=3
Class1=CMultithreadTApp
Class2=CMultithreadTDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MULTITHREADT_DIALOG
Resource4=IDR_MENUMAIN

[CLS:CMultithreadTApp]
Type=0
HeaderFile=MultithreadT.h
ImplementationFile=MultithreadT.cpp
Filter=N

[CLS:CMultithreadTDlg]
Type=0
HeaderFile=MultithreadTDlg.h
ImplementationFile=MultithreadTDlg.cpp
Filter=D
LastObject=IDR_MENUEXIT
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=MultithreadTDlg.h
ImplementationFile=MultithreadTDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MULTITHREADT_DIALOG]
Type=1
Class=CMultithreadTDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RICHEDIT_LISTCONINFO,RICHEDIT,1353779332

[MNU:IDR_MENUMAIN]
Type=1
Class=CMultithreadTDlg
Command1=IDR_MENUSAVELOGFILE
Command2=IDR_MENUEXIT
Command3=IDR_MENUSTART
Command4=IDR_MENUSTOP
CommandCount=4

