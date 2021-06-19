#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int printerr(int err)
{
    if (err == 1)
        std::cout << "Error: wrong numer of args\n";
    else if (err == 2)
        std::cout << "Error: wrong arguments\n";
    else if (err == 3)
        std::cout << "Error: bad file\n";
    return err;
}

int check_args(char **argv)
{
    std::string s;
    std::fstream fs;

    for (int i = 1; i < 4; i++)
    {
        s.append(argv[i]);
        if (!s.compare(""))
            return 2;
        s.clear();
    }
    fs.open(argv[1], std::fstream::in);
    if (!fs.is_open())
        return 3;
    fs.close();
    return (0);
}

int main(int argc, char **argv)
{
    int ret;
    size_t index = 0;
    std::stringstream buff;
    std::string newfile;
    std::fstream fs;
    std::string find;
    std::string replace;

    if (argc != 4)
        return printerr(1);
    if ((ret = check_args(argv)))
        return printerr(ret);
    find.append(argv[2]);
    replace.append(argv[3]);
    fs.open(argv[1], std::fstream::in);
    buff << fs.rdbuf();
    newfile = buff.str();
    while (true)
    {
        index = newfile.find(find, index);
        if (index == std::string::npos)
            break;
        newfile.replace(index, find.length(), replace);
        index += replace.length();
    }
    fs.close();
    replace.clear();
    replace.append(argv[1]);
    replace.append(".replace");
    fs.open(replace, std::fstream::out);
    fs << newfile;
    fs.close();
}