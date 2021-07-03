#include "span.hpp"
#include <limits>

int abs(int x)
{
    return x < 0 ? -x : x;
}

Span::Span(unsigned int num) : maxcount(num), count(0), Arr(new int[num]()){
}

Span::~Span() {
    delete this->Arr;
}

void Span::addNumber(int num) {
    if (this->count == this->maxcount)
        throw TooManyElementsExp();
    this->Arr[this->count++] = num;
}

int Span::shortestSpan() {
    if (this->count < 2)
        throw NotEnoughElemetsExp();
    int sh = INT32_MAX;
    for (int i = 0; i < this->count; i++)
        for (int j = i + 1; j < this->count; j++)
            if (abs(this->Arr[i] - this->Arr[j]) < sh)
                sh = abs(this->Arr[i] - this->Arr[j]);
    return sh;
}

int Span::longestSpan() {
    if (this->count < 2)
        throw NotEnoughElemetsExp();
    int sh = 0;
    for (int i = 0; i < this->count; i++)
        for (int j = i + 1; j < this->count; j++)
            if (abs(this->Arr[i] - this->Arr[j]) > sh)
                sh = abs(this->Arr[i] - this->Arr[j]);
    return sh;
}

const char *Span::NotEnoughElemetsExp::what() const throw()
{
    return "Not enough elements in Span";
}

const char *Span::TooManyElementsExp::what() const throw()
{
    return "Stack is full!";
}
