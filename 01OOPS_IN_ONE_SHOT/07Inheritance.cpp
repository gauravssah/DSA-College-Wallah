#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Perent class." << endl;
    }
};

class child : public Parent
{
public:
    child()
    {
        cout << "child class." << endl;
    }
};

int main()
{
    child c;

    return 0;
}