#include "Harl.hpp"


void Harl::harlFilter(std::string str)
{
    int index = get_level_idx(str);
    Harl harl;
    switch (index)
    {
        case 0:
            harl.complain(str);
        case 1:
            harl.complain(str);
        case 2:
            harl.complain(str);
        case 3:
            harl.complain(str);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break ;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        harl .harlFilter(argv[1]);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    return (0);
}