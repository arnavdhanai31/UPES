#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  system("cls");
  struct node
  {
    int data;
    struct node *next;
  } Size, *head, *temp, *a;

  int nodes, pos, choice;

  head = (struct node *)malloc(sizeof(Size));
  printf("\nEnter data for head: ");
  scanf("%d", &(head->data));
  printf("\nHead node created");
  temp = head;

label:
  printf("\n\nEnter your choice\n1. Insert Nodes\n2. Delete from Head\n3. Delete from Location\n4. Print\n5. Count\n6. Exit\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    printf("\nEnter the no of nodes: ");
    scanf("%d", &nodes);
    printf("\n");
    for (int i = 0; i < nodes; i++)
    {
      temp->next = (struct node *)malloc(sizeof(Size));
      temp = temp->next;
      printf("Enter data for node %d: ", i + 1);
      scanf("%d", &(temp->data));
      temp->next = NULL;
    }
    break;

  case 2:
    temp = head;
    head = head->next;
    printf("\n\nDELETED %d FROM HEAD", temp->data);
    free(temp);
    break;

  case 3:
    printf("\nEnter position to delete node: ");
    scanf("%d", &pos);
    temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    struct node *del = temp->next;
    temp->next = temp->next->next;
    printf("\nElement deleted is : %d\n", del->data);
    del->next = NULL;
    free(del);
    break;

  case 4:
    temp = head;
    int index = 0;
    while (temp != NULL)
    {
      index++;
      printf("\nThe data at node %d is: %d", index, temp->data);
      temp = temp->next;
    }
    break;

  case 5:
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
    printf("\nTotal no of nodes: %d", count);
    break;

  case 6:
    exit(0);
    break;

  default:
    printf("\nNo such operation allowed");
  }
  goto label;

  // printf("\n\nDELETING FROM THE END");
  // temp = head;
  // while (temp->next->next != NULL)
  // {
  //   a = temp->next;
  //   temp->next = NULL;
  //   free(a);
  // }

  // count = 0;
  // temp = head;
  // while (temp != NULL)
  // {
  //   count++;
  //   printf("\nThe data at node %d is: %d", count, temp->data);
  //   temp = temp->next;
  // }
  // printf("\nTotal no of nodes: %d", count);
  return 0;
}