/*
* File Version: 0.1
* 
*  
* comment: I didn`t check compile error.
*/
#include <WinSock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
#include <Windows.h>

inline void WsaDataInit(){
WSADATA wsaData;
if(WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
        {//onSocketInitError
                std::cout<<"wsaStartup error"<<endl;//your own message
                
        }
}
int WsaDataInitReturnable(){
WSADATA wsaData;
if(WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
        {//onSocketInitError
                std::cout<<"wsaStartup error"<<endl;//your own message
                return 0;
        }
        return 1;
}