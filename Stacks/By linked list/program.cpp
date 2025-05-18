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

    nn->next = head;
    head = nn;
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "\033[31mStacks is empty!\033[0m" << endl;
      return -1;
    }

    Node *popped = head;
    head = head->next;

    return popped->data;
  }

  int peek()
  {
    return head->data;
  }

  bool isEmpty()
  {
    return head == NULL;
  }
};

int main()
{
  Stacks s;

  s.push(10);
  s.push(20);
  s.push(30);

  cout << s.pop() << endl;
  cout << s.peek() << endl;
  cout << (s.isEmpty() ? "true" : "false") << endl;

  return 0;
}