#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;

    Rectangle() // Default constructor - no args passed.
    {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) // Parameterised constructor - args pass.
    {
        l = x;
        b = y;
    }

    Rectangle(Rectangle &rec) // copy constructor - initialise an obj by another existing object.
    {
        l = rec.l;
        b = rec.b;
    }

    ~Rectangle() // This is Destructor.
    {
        cout << "Destructor is called." << endl;
    }
};

int main()
{

    Rectangle *box = new Rectangle();
    cout << box->l << " - " << box->b << endl;
    delete box; // This keyword is only used with pointer variable to menually delete the objects

    // These are deleted automatically when all the program is executed. by Destructor.
    Rectangle box1(4, 5);
    cout << box1.l << " - " << box1.b << endl;

    // Rectangle r(box1);  // Both are same ways...
    Rectangle r = box1;
    cout << r.l << " - " << r.b << endl;

    return 0;
}