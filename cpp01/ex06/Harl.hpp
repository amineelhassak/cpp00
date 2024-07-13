#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
        Harl();
        void harlFilter(std::string str);
};

int get_level_idx(std::string level);
#endif
