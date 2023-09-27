#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct Node* next;
    };
    void insertatbeginning(struct Node** head,int newData){
        struct node* newNode=(struct Node*)malloc(sizeof(struct Node));
        if(newNode==NULL){
            printf("Memory allocation failed.\n");
            return;
}
newNode->data=newData;
newNode->next=*head;
*head=newNode;
    }
    int main(){
        struct Node* head=NULL;
        insertAtBeginning(&head, 3);
        insertAtBeginning(&head, 2);
        insertAtBeginning(&head, 1);
        struct Node* current=head;
        while(current!=NULL){
            printf("%d->", current->data);
            current=current->next;

        }
        printf("NULL\n");
        return 0;
        
    }
