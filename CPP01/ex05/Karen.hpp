#pragma once

#include <iostream>

class Karen{
    static void debug( void );
    static void info ( void );
    static void warning ( void );
    static void error ( void );
    public:
    static void complain(std::string level);
};