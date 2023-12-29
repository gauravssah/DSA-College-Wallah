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

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
};

void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }

    Node *newNode = new Node(val);
    int i = 1;
    Node *temp = head;

    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
};

void displayNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
};

int main()
{
    Node *head = NULL;
    insertAtHead(head, 45);
    insertAtHead(head, 5);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 33);
    displayNodes(head);
    insertAtPosition(head, 555, 4);
    displayNodes(head);

    return 0;
}