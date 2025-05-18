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

class Stacks
{

private:
  Node *head;

public:
  Stacks()
  {
    head = NULL;
  }

  void push(int val)
  {
    Node *nn = new Node(val);

    if (head == NULL)
    {
      head = nn;
      return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = nn;
  }

  int pop()
  {
    if (head == NULL)
    {
      cout << "\033[31mStacks is empty!\033[0m" << endl;
      return -1;
    }

    if (head->next == NULL)
    {
      Node *popped = head;
      head = NULL;
      return popped->data;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }

    Node *popped = temp->next;
    temp->next = NULL;

    return popped->data;
  }
};

int main()
{
  Stacks s;

  s.push(10);
  s.push(20);
  s.push(30);

  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << endl;

  s.push(-10);
  s.push(-20);
  s.push(-30);

  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;

  return 0;
}