#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <regex>



int parse(std::string s)
{
    std::regex str("(\\D)");
    std::regex i("([+-]?\\d{1,10})");
    std::regex d("((nan|[+-]?\\d*[.]\\d*|[+-]inf))");
    std::regex f("((nanf|[+-]?\\d*[.]\\d*f|[+-]inff))");
    if (std::regex_match(s, str))
        return 1;
    else if (std::regex_match(s, i))
        return 2;
    else if (std::regex_match(s, f))
        return 3;
    else if (std::regex_match(s, d))
        return 4;
    else
        return -1;
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
    std::cout << "Float: " << static_cast<float>(tmp) << std::endl;
    std::cout << "Double " << static_cast<double>(tmp) << std::endl;
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
    std::cout << "Float: " << static_cast<float>(i) << std::endl;
    std::cout << "Double " << static_cast<double>(i) << std::endl;
}

void treatfloat(std::string s)
{
    float f;
    float tmp;
    float tmp2;
    std::string::size_type sz;
    s.pop_back();

    f = std::stof(s, &sz);
    tmp = std::modf(f, &tmp2);
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
    std::cout << "Float: " << f << std::endl;
    std::cout << "Double " << static_cast<double>(f) << std::endl;
}

void treatdouble(std::string s)
{
    double f;
    double tmp;
    double tmp2;
    std::string::size_type sz;

    f = std::stod(s, &sz);
    tmp = std::modf(f, &tmp2);
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
    std::cout << "Float: " << static_cast<float>(f) << std::endl;
    std::cout << "Double " << f << std::endl;
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
