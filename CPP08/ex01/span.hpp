#pragma once
#include <exception>
class Span{
    private:
    int maxcount;
    int count;
    int *Arr;
    Span();
    public:
    ~Span();
    Span(unsigned int num);
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    class NotEnoughElemetsExp : public std::exception
    {
        public:
        const char *what() const throw();
    };
    class TooManyElementsExp : public std::exception{
        public:
        const char *what() const throw();
    };
};