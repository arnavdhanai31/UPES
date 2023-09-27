#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    struct node *prev;
    };
    struct node *create(struct node *head,int size){
        struct node *last;
        int i,val;
        for(i=0;i<size;i++){
            if(i==0){
                scanf("%d",&val);
                head->data=val;
                head->prev=NULL;
                if
            }
        }
    }