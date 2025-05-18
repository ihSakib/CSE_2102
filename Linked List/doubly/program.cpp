#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    data = val;
    next = NULL;
    prev == NULL;
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

  void insertHead(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }

  void insertTail(int val)
  {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
      head = newNode;
      return;
    }

    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
  }

  void insertPos(int pos, int val)
  {
    if (pos == 1)
    {
      insertHead(val);
      return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
      temp = temp->next;
    }

    if (temp == NULL)
    {
      cout << "Out of bounds!" << endl;
      return;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
    {
      temp->next->prev = newNode;
    }

    temp->next = newNode;
    newNode->prev = temp;
  }

  void traverseForward()
  {
    if (head == NULL)
    {
      cout << "Empty List!" << endl;
      return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "null" << endl;
  }
};

int main()
{

  LL ll;

  for (size_t i = 0; i <= 5; i++)
  {
    ll.insertTail(i);
  }

  for (int i = -1; i >= -5; i--)
  {
    ll.insertHead(i);
  }

  ll.insertPos(11, 100);

  ll.traverseForward();

  return 0;
}