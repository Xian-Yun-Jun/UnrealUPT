#include "UPTDelegateCenter.h"

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnLaunchGame;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnOpenProject;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnOpenIDE;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnGenerateSolution;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnShowInExplorer;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnClearProject;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnOpenCodeMgrWindow;

FUPTDelegateCenter::FOnProjectOperation FUPTDelegateCenter::OnAddNewCodeFile;

FUPTDelegateCenter::FOnRequestAddNotification FUPTDelegateCenter::OnRequestAddNotification;

FSimpleDelegate FUPTDelegateCenter::OnRefresh;

FSimpleMulticastDelegate FUPTDelegateCenter::OnExit;