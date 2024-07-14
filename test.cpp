#include <iostream>
#include <stdlib.h>
using namespace std;

class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();
};

test::test()
{
    std::cout << "lmlaaaawi" << std::endl;
}

test::~test()
{
    std::cout << "laaaawi" << std::endl;
}


int main()
{
    test * ptr=(test*)malloc(sizeof(test));
    free(ptr);
    // test *ptr = new test;
    // delete ptr;
}