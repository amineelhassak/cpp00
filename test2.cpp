#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>
std::string fun()
{
    time_t time_;
    time_ = time(nullptr);
    tm* localeTime = localtime(&time_);
    std::ostringstream stream;
    stream << std::put_time(localeTime,"[%Y%m%d_%H%M%S]");
    return stream.str();
}

int main()
{
    std::string str = fun();
    std::cout << str << std::endl;
    return (0);
}