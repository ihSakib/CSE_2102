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

class LL
{
private:
    Node *head;

public:
    LL()
    {
        head = NULL;
    }

    ~LL()
    {
        if (head == NULL)
            return;

        Node *curr = head->next;
        while (curr != head)
        {
            Node *temp = curr;
            curr = curr->next;
            delete temp;
        }
        delete head;
    }

    void insertHead(int val)
    {
        Node *nn = new Node(val);
        if (head == NULL)
        {
            head = nn;
            head->next = head;
            return;
        }

        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = nn;

        nn->next = head;
        head = nn;
    }

    void insertTail(int val)
    {

        Node *nn = new Node(val);
        if (head == NULL)
        {
            head = nn;
            head->next = head;
            return;
        }

        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = nn;
        nn->next = head;
    }

    void traverse()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head->next;
        cout << head->data << " -> ";

        while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "..." << endl;
    }

    void traverseFrom(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;

        for (size_t i = 1; i < pos; i++)
        {
            temp = temp->next;
            if (temp == head)
            {
                cout << "Invalid position!" << endl;
                return;
            }
        }

        Node *start = temp;
        cout << start->data << " -> ";

        while (temp->next != start)
        {
            temp = temp->next;
            cout << temp->data << " -> ";
        }

        cout << "..." << endl;
    }
};

int main()
{
    LL ll;

    // for (int i = 1; i <= 5; i++)
    // {
    //     ll.insertHead(i);
    // }

    for (int i = 0; i < 6; i++)
    {
        ll.insertTail(i);
    }

    ll.traverse();

    ll.traverseFrom(3);

    return 0;
}