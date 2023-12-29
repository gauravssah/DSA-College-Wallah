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
    // displayNodes(head);
    insertAtHead(head, 4);
    // displayNodes(head);
    insertAtHead(head, 6);
    insertAtHead(head, 8);
    insertAtHead(head, 10);
    insertAtHead(head, 12);
    displayNodes(head);

    return 0;
}