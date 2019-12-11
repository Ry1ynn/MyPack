#pragma once

//// 用于共享数据的结构体
//typedef struct _SHAREDATA
//{
//	long origOEP = 0;	//原始OEP
//	long rva = 0;		// 待加密位置的RVA
//	long size = 0;		// 加密的大小
//	BYTE key = 0;		// 加密时密钥
//}SHAREDATA, PSHAREDATA;
//
//
//typedef struct _StubConf
//{
//	DWORD srcOep;		//入口点
//	DWORD textScnRVA;	//代码段RVA
//	DWORD textScnSize;	//代码段的大小
//
//	unsigned char key[16] = {};//解密密钥
//	int index = 0;			  //加密的区段数量 用的时候需要-1
//	int data[20][2];  //加密的区段RVA和Size	
//
//	DWORD dwDataDir[20][2];  //数据目录表的RVA和Size	
//	DWORD dwNumOfDataDir;	//数据目录表的个数
//
//	DWORD oep;
//	DWORD nImportVirtual;
//	DWORD nImportSize;
//	DWORD nRelocVirtual;
//	DWORD nRelocSize;
//	DWORD nResourceVirtual;
//	DWORD nResourceSize;
//	DWORD nTlsVirtual;
//	DWORD nTlsSize;
//
//}StubConf;
//
//
//
//typedef struct DosStub
//{
//	DWORD nOldImageBass;//被加壳程序运行前默认的加载基址
//	DWORD nStubTextSectionRva;//壳在壳自身的text段Rva
//	DWORD nStubRelocSectionRva;//壳的重定位表与text段合并后在被加壳程序的Rva
//}DosSub;
//
//
//
//// 声明函数指针
//typedef void* (WINAPI *FnGetProcAddress)(HMODULE, const char*);
////typedef DWORD (WINAPI *PGetProcAddress)(DWORD, const char*);
//typedef void* (WINAPI *PLoadLibraryA)(char*);
//typedef void* (WINAPI *PVirtualProtect)(LPVOID, SIZE_T, DWORD, PDWORD);
//typedef HMODULE(WINAPI *PGetMoudleHandleA)(_In_ LPCWSTR lpMoudleName);
//typedef ATOM(WINAPI *PRegisterClassEx)(_In_ const WNDCLASSEX *lpwcx);
//typedef BOOL(*PUpdateWindow)(HWND hWnd);
//typedef BOOL(WINAPI* PShowWindow)(_In_ HWND hWnd, _In_ int nCmdShow);
//typedef BOOL(WINAPI* PGetMessage)(_Out_ LPMSG lpMsg, _In_opt_ HWND hWnd, _In_ UINT wMsgFilterMin, _In_ UINT wMsgFilterMax);
//typedef BOOL(WINAPI* PTranslateMessage)(_In_ CONST MSG *lpMsg);
//typedef LRESULT(WINAPI* PDispatchMessageW)(_In_ CONST MSG *lpMsg);
//typedef int (WINAPI* PGetWindowTextW)(_In_ HWND hWnd, _Out_writes_(nMaxCount) LPWSTR lpString, _In_ int nMaxCount);
//typedef void (WINAPI* PExitProcess)(_In_ UINT uExitCode);
//typedef LRESULT(WINAPI* PDefWindowProcW)(_In_ HWND hWnd, _In_ UINT Msg, _In_ WPARAM wParam, _In_ LPARAM lParam);
//typedef void (WINAPI* PPostQuitMessage)(_In_ int nExitCode);
//typedef HWND(WINAPI* PFindWindowW)(_In_opt_ LPCWSTR lpClassName, _In_opt_ LPCWSTR lpWindowName);
//typedef int (WINAPI* PMessageBoxW)(_In_opt_ HWND hWnd, _In_opt_ LPCWSTR lpText, _In_opt_ LPCWSTR lpCaption, _In_ UINT uType);
//typedef HWND(WINAPI *PCreateWindowEx)(_In_ DWORD dwExStyle, _In_opt_ LPCTSTR lpClassName,_In_opt_ LPCTSTR lpWindowName, _In_ DWORD dwStyle,_In_ int x,_In_ int y,_In_ int nWidth,_In_ int nHeight,_In_opt_ HWND hWndParent, _In_opt_ HMENU hMenu,_In_opt_ HINSTANCE hInstance,_In_opt_ LPVOID lpParam);
//typedef LRESULT(WINAPI* PSendMessageW)(_In_ HWND hWnd,_In_ UINT Msg,_Pre_maybenull_ _Post_valid_ WPARAM wParam, _Pre_maybenull_ _Post_valid_ LPARAM lParam);
//typedef LPVOID(WINAPI* PVirtualAlloc)(LPVOID, SIZE_T, DWORD, DWORD);
//typedef VOID(WINAPI* PRtlMoveMemory)(LPVOID, LPVOID, SIZE_T);
//
//
//// 事先声明函数原型
//LRESULT CALLBACK WndPrco(HWND, UINT, WPARAM, LPARAM);

typedef struct _SHAREDATA
{
	long origOEP = 0;	//原始OEP
	long rva = 0;		// 待加密位置的RVA
	long size = 0;		// 加密的大小
	BYTE key = 0;		// 加密时密钥

	//unsigned char key[16] = {};//解密密钥
	//int index = 0;			  //加密的区段数量 用的时候需要-1
	//int data[20][2];  //加密的区段RVA和Size	
	//DWORD dwDataDir[20][2];  //数据目录表的RVA和Size	
	//DWORD dwNumOfDataDir;	//数据目录表的个数
	//DWORD oep;
	//DWORD nImportVirtual;
	//DWORD nImportSize;
	//DWORD nRelocVirtual;
	//DWORD nRelocSize;
	//DWORD nResourceVirtual;
	//DWORD nResourceSize;
	//DWORD nTlsVirtual;
	//DWORD nTlsSize;

}SHAREDATA,*PSHAREDATA;


//typedef struct DosStub
//{
//	DWORD nOldImageBass;//被加壳程序运行前默认的加载基址
//	DWORD nStubTextSectionRva;//壳在壳自身的text段Rva
//	DWORD nStubRelocSectionRva;//壳的重定位表与text段合并后在被加壳程序的Rva
//}DosSub;


//定义函数指针和变量
typedef void* (WINAPI *FnGetProcAddress)(HMODULE, const char*);
typedef void* (WINAPI *FnLoadLibraryA)(char*);
typedef void* (WINAPI *FnVirtualProtect)(LPVOID, SIZE_T, DWORD, PDWORD);
typedef HMODULE(WINAPI *fnGetMoudleHandleA)(_In_ LPCWSTR lpMoudleName);
typedef ATOM(WINAPI *fnRegisterClassEx)(_In_ const WNDCLASSEX *lpwcx);
typedef HWND(WINAPI *fnCreateWindowEx)(
	_In_ DWORD dwExStyle,
	_In_opt_ LPCTSTR lpClassName,
	_In_opt_ LPCTSTR lpWindowName,
	_In_ DWORD dwStyle,
	_In_ int x,
	_In_ int y,
	_In_ int nWidth,
	_In_ int nHeight,
	_In_opt_ HWND hWndParent,
	_In_opt_ HMENU hMenu,
	_In_opt_ HINSTANCE hInstance,
	_In_opt_ LPVOID lpParam
	);


typedef BOOL(*fnUpdateWindow)(HWND hWnd);


typedef BOOL(WINAPI* fnShowWindow)(_In_ HWND hWnd, _In_ int nCmdShow);


typedef BOOL(WINAPI* fnGetMessage)(_Out_ LPMSG lpMsg, _In_opt_ HWND hWnd, _In_ UINT wMsgFilterMin, _In_ UINT wMsgFilterMax);


typedef BOOL(WINAPI* fnTranslateMessage)(_In_ CONST MSG *lpMsg);


typedef LRESULT(WINAPI* fnDispatchMessageW)(_In_ CONST MSG *lpMsg);


typedef int (WINAPI* fnGetWindowTextW)(_In_ HWND hWnd, _Out_writes_(nMaxCount) LPWSTR lpString, _In_ int nMaxCount);


typedef void (WINAPI* fnExitProcess)(_In_ UINT uExitCode);


typedef LRESULT(WINAPI* fnSendMessageW)(
	_In_ HWND hWnd,
	_In_ UINT Msg,
	_Pre_maybenull_ _Post_valid_ WPARAM wParam,
	_Pre_maybenull_ _Post_valid_ LPARAM lParam);


typedef LRESULT(WINAPI* fnDefWindowProcW)(_In_ HWND hWnd, _In_ UINT Msg, _In_ WPARAM wParam, _In_ LPARAM lParam);


typedef void (WINAPI* fnPostQuitMessage)(_In_ int nExitCode);


typedef HWND(WINAPI* fnFindWindowW)(_In_opt_ LPCWSTR lpClassName, _In_opt_ LPCWSTR lpWindowName);


typedef int (WINAPI* fnMessageBoxW)(_In_opt_ HWND hWnd, _In_opt_ LPCWSTR lpText, _In_opt_ LPCWSTR lpCaption, _In_ UINT uType);


typedef HDC(WINAPI* fnBeginPaint)(_In_ HWND hWnd, _Out_ LPPAINTSTRUCT lpPaint);

typedef BOOL(WINAPI* fnEndPaint)(_In_ HWND hWnd, _In_ CONST PAINTSTRUCT *lpPaint);

typedef LPVOID(WINAPI* FnVirtualAlloc)(LPVOID, SIZE_T, DWORD, DWORD);

typedef VOID(WINAPI* FnRtlMoveMemory)(LPVOID, LPVOID, SIZE_T);

//窗口消息回调函数
LRESULT CALLBACK WndPrco(HWND, UINT, WPARAM, LPARAM);