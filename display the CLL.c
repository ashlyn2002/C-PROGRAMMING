/*
 ============================================================================
 Name        : display.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void create();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
int main()
{
    printf("the function of circular linked list\n");
    printf("1.implementation of linked list\n");
    create();
    printf("2.display the linked list\n");
    display();
}
void create()
{
    struct node *newnode,*temp;
    int choice;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data =");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        printf("do you need to continue(0,1)?\n enter 0 to stop and 1 to continue =");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
