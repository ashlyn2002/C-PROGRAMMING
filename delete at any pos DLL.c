/*
 ============================================================================
 Name        : delete.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void creat();
void display();
void count();
void delete_at_pos();
struct node
{
int data;
struct node *next;
struct node *pre;
};
struct node *head=0;
int main()
{
    printf("function of double linked list \n");
    printf("1.implementation of linked list\n");
    printf("2.display the linked list\n");
    printf("3.count the number of element in the linked list\n");
    printf("4.delete the element from any position from the linked list\n");
    printf("5.exit\n");
    int choice;
    printf("enter the choice =");
    scanf("%d",&choice);
    while(choice!=6)
    {
        switch(choice)
        {
            case 1: printf("implementation\n");
            creat();
            break;
            case 2:printf("display the linked list\n");
            display();
            break;
            case 3:printf("count the number of element in the linked list\n");
            count();
            break;
            case 4:printf("delete the element from any position from the linked list\n");
            delete_at_pos();
            break;
            case 5:printf("exit \n");
            exit(0);
            break;
            default:printf("invalied choice \n");
            break;
        }
         printf("enter the choice =");
        scanf("%d",&choice);
    }
}
void creat()
{
struct node *newnode,*temp;
int choice;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
            printf("enter the data =");
            scanf("%d",&newnode->data);
            newnode->pre=0;
            newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
        printf("do you need to continue(0,1)?\n enter 0 to stop  enter 1 to continue = ");
        scanf("%d",&choice);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(head==0)
    {
        printf("the list is empty");
    }
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void count()
{
    struct node *temp;
    temp=head;
    int c=0;
    while(temp!=0)
    {
        c++;
        temp=temp->next;
    }
    printf("the number of elements in the linked list is %d \n",c);
}
void delete_at_pos()
{
    struct node *temp;
    int pos;
    int i=1;
    printf("enter the position =");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    if(temp->next==0)
    {
        temp->pre->next=0;
        free(temp);
    }
    else
    {
        temp->next->pre=temp->pre;
        temp->pre->next=temp->next;
        free(temp);
    }
}
