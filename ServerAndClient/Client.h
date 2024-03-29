#pragma once
#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>


#ifdef linux
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>  //
#include <netdb.h>  //
#include <memory.h> //
typedef int UniversalSocket;
#endif

#define BUFFER 1024

#ifdef WIN32
#include <winsock2.h>
#include <Ws2tcpip.h>
#include <Mstcpip.h>
#pragma		comment (lib,"ws2_32.lib")
typedef SOCKET UniversalSocket;
#endif

using namespace std;

class Client
{
public:
	Client();
	~Client();

	void Clear();
	void CloseUniversalSocket(UniversalSocket);
	void Download(UniversalSocket, char*);
	int GetRes(UniversalSocket);
	UniversalSocket Initial();
	char** Parsing(char*);
	void Upload(UniversalSocket, char*);
	void WorkClient(UniversalSocket);
};

