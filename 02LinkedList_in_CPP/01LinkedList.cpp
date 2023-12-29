#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    Node *n = new Node(5);
    cout << "| " << n->data << " | " << n->next << " | " << endl;

    return 0;
}