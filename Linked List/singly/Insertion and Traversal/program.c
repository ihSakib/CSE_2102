#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *createNode(int value)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = value;
  new_node->next = NULL;
  return new_node;
}

void insert_end(struct Node **head, int value)
{
  struct Node *new_node = createNode(value);

  if (*head == NULL)
  {
    *head = new_node;
    return;
  }

  struct Node *temp = *head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = new_node;
}

void insert_start(struct Node **head, int value)
{
  struct Node *new_node = createNode(value);

  new_node->next = *head;
  *head = new_node;
}

void traverse(struct Node **head)
{
  struct Node *temp = *head;

  while (temp != NULL)
  {
    printf("\033[32m%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\033[0m");
}

int main()
{
  struct Node *head = NULL;

  for (size_t i = 10; i < 16; i++)
  {
    insert_end(&head, i);
    insert_start(&head, i % 10);
  }

  traverse(&head);

  return 0;
}