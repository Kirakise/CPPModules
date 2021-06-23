#include "Karen.hpp"

int Karen::sort = 0;

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]\nIt's not a warcrime if it was FUN" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    void (*choice[4]) () = {Karen::debug, Karen::info, Karen::warning, Karen::error};
    std::string s[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (level == s[i] && Karen::sort <= i)
        {
            choice[i]();
            return ;
        }
    }
}

void Karen::setlevel(std::string level)
{
    std::string s[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (level == s[i])
        {
            Karen::sort = i;
        }
    }
}