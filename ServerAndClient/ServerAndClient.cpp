// ServerAndClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>

#include "Server.h"
#include "Client.h"

using namespace std;

void ServerThread()
{
	Server server;
}

void ClientThread()
{
	Client client;
}

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		string param1(argv[1]);
		if (param1 == "-s")
		{
			//thread serverThread(ServerThread);
			//serverThread.join();
			Server server;
		}
		else
		{
			//thread clientThread(ClientThread);
			//clientThread.join();
			Client client;
		}
	}

    return 0;
}

