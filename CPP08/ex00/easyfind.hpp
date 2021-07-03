#pragma once

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &arr, int value)
{
    return (std::find(arr.begin(), arr.end(), value));
}