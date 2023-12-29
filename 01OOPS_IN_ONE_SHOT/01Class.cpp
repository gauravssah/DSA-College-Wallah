#include <iostream>
using namespace std;

class Fruit
{
public:
    string name;
    string color;
};

int main()
{
    Fruit apple;
    apple.name = "Apple";
    apple.color = "red";

    cout << apple.name << " - " << apple.color << endl;

    Fruit *mango = new Fruit();
    mango->color = "Yellow";
    mango->name = "Mango";
    cout << mango->name << " - " << mango->color << endl;

    return 0;
}