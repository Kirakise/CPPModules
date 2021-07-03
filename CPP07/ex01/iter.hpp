#pragma once

template <typename T, typename D>
void iter(T *a, int len, D (*func)(T a))
{
    for (int i = 0; i < len; i++)
        func(a[i]);
}