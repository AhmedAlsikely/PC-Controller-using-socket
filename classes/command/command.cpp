#include "command.hpp"

Std_Return Command::executeCmdLine(std::string commaned){
    Std_Return R_value = Std_Return::STD_R_OK;
    const char * select_commaned = NULL;
   
    if(commaned.substr(0,7) == "youtube")
    {
        select_commaned = youtube;
    }
    else if(commaned.substr(0,3) == "cal")
    {
        select_commaned = cal;
    }
    else if(commaned.substr(0,8) == "poweroff")
    {
        select_commaned = poweroff;
    }
    else if(commaned.substr(0,6) == "vscode")
    {
        select_commaned = vscode;
    }
    else if(commaned.substr(0,8) == "terminal")
    {
        select_commaned = terminal;
    }
    else
    {
        std::cout <<  "Fault command" << std::endl;
        R_value = Std_Return::STD_R_NOK;
    }

    if(R_value == Std_Return::STD_R_OK)
    {
        int result = std::system(select_commaned);
        if (result == 0) 
        {
            Std_Return R_value = Std_Return::STD_R_OK;
        }
        else
        {
            std::cerr << "Error executing command" << std::endl;
            Std_Return R_value = Std_Return::STD_R_NOK;
            
        }
    }
    
    return R_value;
}