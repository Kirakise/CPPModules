#include "iter.hpp"
#include <iostream>
void Func1(int a)
{
    std::cout << a << std::endl;
}

int Func2(int a)
{
    return a;
}

void Func3(char c)
{
    std::cout << c << std::endl;
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    char s[6] = "asdad";
    iter(arr, 5, Func1);
    iter(arr, 5, Func2);
    iter(s, 5, Func3);
}