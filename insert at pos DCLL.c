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
    struct node *pre;
};
struct node *head=0;
int main()
{
    int choice;
    printf("function of doubly circular linked list \n");
    printf("1.implementation \n");
    printf("2.display the linked list\n");
    printf("3.count the number of elements in the linked list\n");
    printf("4.insert the element at any position in the linked list\n");
    printf("5.exit\n");
    printf("enter the choice =");
    scanf("%d",&choice);
    while(choice!=6)
    {
        switch(choice)
        {
            case 1:printf("implementation \n");
            create();
            break;
            case 2:printf("display the linked list\n");
            display();
            break;
            case 3:printf("count the number of elements in the linked list\n");
            count();
            break;
            case 4: printf("insert the element at any position in the linked list\n");
            insert_at_pos();
            break;
            case 5:printf("exit\n");
            exit(0);
            break;
            default:printf("wrong choice\n");
            break;
        }
        printf("enter the choice =");
        scanf("%d",&choice);
    }
}
void create()
{
    struct node *newnode,*temp;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data =");
        scanf("%d",&newnode->data);
        newnode->pre=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
            newnode->next=newnode;
            newnode->pre=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->pre=temp;
            newnode->next=head;
            temp=newnode;
            head->pre=temp;
        }
    printf("do you need to continue(0,1)?\nenter 0 to stop and 1 to continue =");
    scanf("%d",&choice);
    }

}
void display()
{
    struct node *temp;
    if(head==0)
    {
        printf("the list is empty\n");
    }
    temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("\n");
}
int count()
{
    struct node *temp;
    int c=0;
    temp=head;
    do
    {
        c++;
        temp=temp->next;
    }while(temp!=head);
    printf("the number of elements in the linked list is %d\n",c);
    return c;
}
void insert_at_pos()
{
    struct node *newnode,*temp;
    int i=1;
    int pos;
    int leg=count();
    printf("enter the position in between the 1 to %d\n",leg);
    printf("enter the position =");
    scanf("%d",&pos);
    if(pos>leg)
    {
        printf("invalied position\n");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data =");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        newnode->pre=temp;
        temp->next->pre=newnode;
        temp->next=newnode;
    }
}
