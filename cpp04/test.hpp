#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
using namespace std;

class Test
{
    private:
        static const std::string name ;
    public:
        void annoce()   {
            cout << "name est :"<< this->name << endl;
        }
        Test()
        {
            cout<<"constructeur"<<endl;
        };
};

class Test2
{
    private:
        static const std::string name ;
    public:
        void annoce1()   {
            cout << "name est :"<< this->name << endl;
        }
        Test2()
        {
            cout<<"constructeur"<<endl;
        };
};

class Test3
{
    private:
        static const std::string name;
    public:
        void annoce2()   {
            cout << "name est :"<< this->name << endl;
        }
        Test3()
        {
            cout<<"constructeur"<<endl;
        };
};

class Testfill: public Test , public Test2,public Test3{};


class Testgrandfill: public Testfill{};
// class TestGgrandfill: public Testgrandfill{};
const string Test::name = "amine";
const string Test2::name = "mami";
const string Test3::name = "yahya";
#endif