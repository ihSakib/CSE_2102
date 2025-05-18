#include <iostream>
using namespace std;
#define null NULL

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = null;
  }
};

class Queues
{
private:
  Node *head;

public:
  Queues()
  {
    head = null;
  }

  // enqueue
  void enqueue(int val)
  {
    Node *nn = new Node(val);
    if (head == null)
    {
      head = nn;
      return;
    }

    Node *temp = head;
    while (temp->next != null)
    {
      temp = temp->next;
    }

    temp->next = nn;
  }

  // dequeue
  int dequeue()
  {

    if (isEmpty())
    {
      cout << "Empty!" << endl;
      return -1;
    }

    Node *dequeued = head;
    head = head->next;

    return dequeued->data;
  }

  bool isEmpty()
  {
    return head == null;
  }
};

int main()
{

  Queues q;

  for (size_t i = 10; i < 16; i++)
  {
    q.enqueue(i);
  }

  for (size_t i = 0; i < 6; i++)
  {
    cout << q.dequeue() << endl;
  }

  cout << (q.isEmpty() ? "true" : "false") << endl;

  return 0;
}