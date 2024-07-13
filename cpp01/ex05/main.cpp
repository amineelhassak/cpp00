#include "Harl.hpp"

int main()
{
    std::string arry[5] = {"DEBUG","INFO","WARNING","ERROR","Oops!"};
    Harl harl;
    size_t i = 0;
    for (;i < 4; i++)
        harl.complain(arry[i]);
    harl.complain(arry[i]);
}