#include "Karen.hpp"
#include <string>

int main(int argc, char **argv)
{
    std::string s;

    if (argc > 2)
    {
        std::cout << "invalid amount of args" << std::endl;
        return 1;
    }
    if (argc == 2)
    {
        s.append(argv[1]);
        for (unsigned long i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        Karen::setlevel(s);
    }
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    Karen::complain("debug");
    Karen::complain("warning");
    Karen::complain("info");
    Karen::complain("error");
    return (0);
}