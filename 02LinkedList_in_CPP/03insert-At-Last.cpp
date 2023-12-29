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

void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
};

void displayNodes(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        // cout << "| " << temp->data << " | " << temp->next << " | "
        //      << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
};

int main()
{
    Node *head = NULL;
    insertAtHead(head, 2);
    insertAtHead(head, 21);
    insertAtHead(head, 22);
    insertAtEnd(head, 123);
    displayNodes(head);
    return 0;
}