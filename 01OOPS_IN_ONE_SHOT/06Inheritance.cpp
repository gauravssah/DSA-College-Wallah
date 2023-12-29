#include <iostream>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class child1 : public Parent
{
    // x will remain public.
    // y will remain protected.
    // z will not be accessible.
};

int main()
{

    return 0;
}