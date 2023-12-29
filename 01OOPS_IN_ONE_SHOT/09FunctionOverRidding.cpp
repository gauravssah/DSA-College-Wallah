#include <iostream>
using namespace std;

class parent
{
public:
    virtual void print()
    {
        cout << "Hey, i am from parent class." << endl;
    }

    void show()
    {
        cout << "Showing from parent classe" << endl;
    }
};

class child : public parent
{
public:
    void print()
    {
        cout << "Hey i am from chid class." << endl;
    }

    void show()
    {
        cout << "Shoeing from child class." << endl;
    }
};

int main()
{
    parent *p;
    child c;
    p = &c;
    p->print();
    p->show();

    return 0;
}