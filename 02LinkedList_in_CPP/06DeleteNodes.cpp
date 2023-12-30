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

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
};

void deleteAtEnd(Node *&head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
};

void deletionAtPosition(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }

    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }

    Node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

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

    // deleteAtHead(head);
    // displayNodes(head);
    // deleteAtEnd(head);
    deletionAtPosition(head, 2);
    displayNodes(head);
    return 0;
}