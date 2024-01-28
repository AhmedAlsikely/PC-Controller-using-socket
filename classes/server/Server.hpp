#ifndef SERVER_H
#define SERVER_H

#include <arpa/inet.h>
#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <csignal>
#include <cstdlib>
#include "../../configrations.hpp"
#include "../command/command.hpp"

class Server{
    public:
    int socketDesc, newSocket;
    ssize_t readSize;
    struct sockaddr_in server, client;
    char message[1024] = {0};

    Std_Return server_Init(int port_number);
    Std_Return server_Accept();
    Std_Return server_Receive();
    Std_Return server_Recv_Command();
    // Std_Return server_Send(const char *data);
    Std_Return server_Close();



    private:
    const char *youtube = "firefox https://www.youtube.com";
    const char *cal = "gnome-calculator";
    const char *vscode = "code ~/codes";
    const char *poweroff ="systemctl poweroff";
    const char *terminal ="gnome-terminal";
};

#endif