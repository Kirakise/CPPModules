#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <regex>
#include <iomanip>


int parse(std::string s)
{
    unsigned long i = 0;
    int type = 0;
    if (s.length() == 1 && !std::isdigit(s[0]))
        return 1;
    if (s == "nan" || s == "+inf" || s == "-inf")
        return 4;
    if (s == "nanf" || s == "+inff" || s == "-inff")
        return 3;
    type = 2;
    if (s[i] == '+'|| s[i] == '-')
        i++;
    while (i < s.length())
    {
        if (s[i] == '.' && type != 4)
            type = 4;
        else if (s[i] == '.' && type == 4)
            return -1;
        if (s[i] == '.' && i == s.length() - 1)
            return -1;
        if (s[i] == 'f' && s.length() - 1 == i)
            return 3;
        else if (s[i] == 'f' && s.length() - 1 != i)
            return -1;
        if (!std::isdigit(s[i]) && s[i] != '.' && s[i] != 'f')
            return -1;
        i++;
    }
    return type;
}

void treaterror()
{
    std::cout << "Char: " << "Impossible" << std::endl;
    std::cout << "Int: " << "Impossible" << std::endl;
    std::cout << "Float: " << "Impossible" << std::endl;
    std::cout << "Double " << "Impossible" << std::endl;
}

void treatchar(std::string s)
{
    char tmp = s[0];
    std::cout << "Char: " << s << std::endl;
    std::cout << "Int: " << static_cast<int>(tmp) << std::endl;
    std::cout << "Float: " << static_cast<float>(tmp) << ".0f" << std::endl;
    std::cout << "Double " << static_cast<double>(tmp) << ".0" << std::endl;
}

void treatint(std::string s)
{
    long i;
    std::string::size_type sz;

    i = std::stol(s, &sz);
    if (sz != s.length() || INT_MAX - i < 0 || INT_MIN + i > 0)
    {
        treaterror();
        return;
    }
    if (i > 127 || i < 0)
        std::cout << "Char: " << "Impossible" << std::endl;
    else if (i < 32 || i == 127)
        std::cout << "Char: " << "Not displayable" << std::endl;
    else
        std::cout << "Char: " << static_cast<char>(i) << std::endl;
    std::cout << "Int: " << static_cast<int>(i) << std::endl;
    std::cout << "Float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "Double " << static_cast<double>(i) << ".0" << std::endl;
}

void treatfloat(std::string s)
{
    float f;
    float tmp;
    std::string::size_type sz;
    s.pop_back();

    f = std::stof(s, &sz);
    tmp = f - (long)f;
    if (sz != s.length())
    {
        treaterror();
        return ;
    }
    if (tmp || f > 127 || f < 0)
        std::cout << "Char: " << "Impossible" << std::endl;
    else if (f < 32 || f == 127)
        std::cout << "Char: " << "Not displayable" << std::endl;
    else
        std::cout << "Char: " << static_cast<char>(f) << std::endl;
    if (tmp || f > INT_MAX || f < INT_MIN)
        std::cout << "Int: " << "Impossible" << std::endl;
    else
        std::cout << "Int: " << static_cast<int>(f) << std::endl;
    if (tmp)
        std::cout << "Float: " <<  static_cast<float>(f) << "f" << std::endl;
    else
        std::cout << "Float: " << static_cast<float>(f) << ".0f" << std::endl;
    if (tmp)
        std::cout << "Double " << f << std::endl;
    else
        std::cout << "Double " << f << ".0" << std::endl;
}

void treatdouble(std::string s)
{
    double f;
    double tmp;
    std::string::size_type sz;

    f = std::stod(s, &sz);
    tmp = f - (long)f;
    if (sz != s.length())
    {
        treaterror();
        return ;
    }
    if (tmp || f > 127 || f < 0)
        std::cout << "Char: " << "Impossible" << std::endl;
    else if (f < 32 || f == 127)
        std::cout << "Char: " << "Not displayable" << std::endl;
    else
        std::cout << "Char: " << static_cast<char>(f) << std::endl;
    if (tmp || f > INT_MAX || f < INT_MIN)
        std::cout << "Int: " << "Impossible" << std::endl;
    else
        std::cout << "Int: " << static_cast<int>(f) << std::endl;
    if (tmp)
        std::cout << "Float: " <<  static_cast<float>(f) << "f" << std::endl;
    else
        std::cout << "Float: " << static_cast<float>(f) << ".0f" << std::endl;
    if (tmp)
        std::cout << "Double " << f << std::endl;
    else
        std::cout << "Double " << f << ".0" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "Not valid num of args" << std::endl;
    else{
        switch (parse(argv[1])){
            case 1:
                treatchar(argv[1]);
                break;
            case 2:
                treatint(argv[1]);
                break;
            case 3:
                treatfloat(argv[1]);
                break;
            case 4:
                treatdouble(argv[1]);
                break;
            default:
                treaterror();
                break;
        }
    }
}
