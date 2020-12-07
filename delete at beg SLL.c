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
void create();
void display();
void count();
void delete_at_beg();
struct node
    {
		int data;
        struct node *next;
    };
    struct node *head=0;
int main()
{
    printf("Linked list functions\n");
    int choice;
    printf("1.implementation\n");
    printf("2.display\n");
    printf("3.count\n");
    printf("4.delete the element at the beginning position\n");
    printf("5.exit\n");
    printf("enter the choice =");
    scanf("%d",& choice);
    while(choice!=6)
    {
		switch(choice)
		{
			case 1:printf("implementation \n");
			create();
			break;
			case 2:printf("display\n");
			display();
			break;
			case 3:printf("count the element in linked list\n");
			count();
			break;
			case 4:printf("delete the element from the beginning\n");
			delete_at_beg();
			break;
			case 5:exit(0);
			break;
			default: printf("wrong choice \n");
			break;
		}
		printf("enter the choice =");
		scanf("%d",& choice);
		}
}
void create()
{
    struct node *newnode,*temp;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter the data = ");
            scanf("%d",& newnode->data);
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
       printf("do you need to continue (0,1)?\n0 to stop 1 to continue the element in the linked list =");
           scanf("%d",& choice);
    }
}
void display()
{
    struct node *temp;
    temp=head;
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
    int count=0;
    temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("the number of element in linked list is %d", count);
    printf("\n");
}
void delete_at_beg()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
