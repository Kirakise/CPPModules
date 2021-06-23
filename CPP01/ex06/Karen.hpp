#pragma once

#include <iostream>

class Karen{
    static int sort;
    static void debug( void );
    static void info ( void );
    static void warning ( void );
    static void error ( void );
    public:
    static void complain(std::string level);
    static void setlevel(std::string level);
};