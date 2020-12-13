/*
 ============================================================================
 Name        : insert.c
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
int count();
void insert_at_pos();
struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
int main()
{
    int choice;
    printf("the function of circular linked list\n");
    printf("1.implementation of linked list\n");
    printf("2.display the linked list\n");
    printf("3.count the number of elements in the linked list\n");
    printf("4.insert the element at any position \n");
    printf("5.exit\n");
    printf("enter your choice =");
    scanf("%d",&choice);
    while(choice!=6)
    {
        switch(choice)
        {
            case 1:printf("implementation of linked list\n");
            create();
            break;
            case 2:printf("display the linked list\n");
            display();
            break;
            case 3:printf("count the number of elements in the linked list\n");
            count();
            break;
            case 4:printf("insert the element at any position \n");
            insert_at_pos();
            break;
            case 5:printf("exit\n");
            exit(0);
            break;
            default:printf("wrong choice \n");
            break;
        }
        printf("enter your choice =");
        scanf("%d",&choice);
    }
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
    if(head==0)
    {
        printf("the list is empty\n");
    }
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
int  count()
{
    struct node *temp;
    temp=head;
    int c=0;
    do
    {
        c++;
        temp=temp->next;
    }while(temp!=head);
    printf("the number of elements in the list is %d\n",c);
    return c;
}
void insert_at_pos()
{
    struct node *newnode,*temp;
    int i=1;
    int pos;
    printf("enter the position =");
    scanf("%d",&pos);
    int leg=count();
    if(pos>leg)
    {
        printf("Invalid position\n");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data =");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
