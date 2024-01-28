#ifndef COMMENT_H
#define COMMENT_H

#include <iostream>
#include <map>
#include <cstring>
#include <unistd.h>
#include "../../configrations.hpp"

class Command {
    public:
    
        const char *youtube = "firefox https://www.youtube.com";
        const char *cal = "gnome-calculator";
        const char *vscode = "code ~/codes";
        const char *poweroff ="systemctl poweroff";
        const char *terminal ="gnome-terminal";

    Std_Return executeCmdLine(std::string commaned);
    private:

};

#endif