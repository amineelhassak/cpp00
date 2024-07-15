#include <iostream>
#include <stdlib.h>
using namespace std;

class test
{
private:
    int n;
    int m;
    static int var_static;
public:
    test();
    test(int, int);
    void affichage();
    static void affiche();
    friend void operator <<(ostream &, test&);
    friend ostream& operator>>(ostream &cin , test&);
    ~test();
};

int test::var_static = 0;
test::test()
{
    test::var_static++;
}

void test::affiche()
{
    std::cout << test::var_static << std::endl;

}
test::test(int n, int m)
{
    this->n = n;
    this->m = m;
}

void test::affichage()
{
    std::cout << "<n> : " << this->n << " <m> :" << this->m << std::endl;
}

test::~test()
{
    std::cout << "destroyed" << std::endl;
}

// *********************** les operateurs *************************************

void operator<<(ostream &cout, test &c)
{
    cout<<c.n<<" + i"<<c.m<<endl;
    // return (cout);
}
// ostream& operator>>(ostream &cin , test&)
// {

// }

int main()
{
    test *t1 = new test;
    test t2(1,3);
    test::affiche();
    cout<<t2;
    delete t1;
}