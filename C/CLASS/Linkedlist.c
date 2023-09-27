#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    } *head,*p;

    int count=0;
    head=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(head->data));
    p=head;
    for(int i=1;i<10;i++)
    {
        p->next=(struct node*)malloc(sizeof(struct node));
        p=p->next;
        p->data=8+i;
        p->next=NULL;
    }
    p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
        count++;
    }
    printf("%d\n",count);
    
}