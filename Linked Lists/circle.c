Write a program in C to implement a circular linked list
Preena K P
•
Aug 24, 2019
100 points
Due Oct 4, 2019
Class comments


Your work
Turned in late

cll.c
C
Private comments

Write a program in C to implement a circular linked list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;

void insbeg()
{
	struct node *temp,*ptr;

	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nMemory Allocation failed");
		return;
	}

    printf("\nEnter the data");
    scanf("%d",&ptr->data);
    ptr->next=NULL;

    if(start==NULL)
    {
    	start=ptr;

    	ptr->next=start;
    }

    else
    {
    	temp=start;
    	while(temp->next!=start)

    		  temp=temp->next;

    	ptr->next=start;
    	temp->next=ptr;
    	start=ptr;
    }

}

void insend()
{
	struct node *temp,*ptr;

	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nMemory Allocation failed");
		return;
	}

    printf("\nEnter the data");
    scanf("%d",&ptr->data);
    ptr->next=NULL;

    if(start==NULL)
    {
    	start=ptr;

    	ptr->next=start;
    }

    else
    {
    	temp=start;
    	while(temp->next!=start)

    		  temp=temp->next;

    	temp->next=ptr;
    	ptr->next=start;
    }

}

void delbeg()
{   
	struct node *temp;
	if(start==NULL)
	{
		printf("\nEmpty List");
		return;
	}

	if(start->next==start)
	{
		printf("\nNode Deleted :%d  ",start->data);
		start=NULL;

	}

	else 
	{
		temp=start;
		while(temp->next!=start)
			  temp=temp->next;
        
        printf("\nNode Deleted :%d ",start->data);
		temp->next=start->next;
		start=start->next;
	}


}

void delend()
{   
	struct node *temp,*pre;
	if(start==NULL)
	{
		printf("\nEmpty List");
		return;
	}

	if(start->next==start)
	{
		printf("\nNode Deleted :%d  ",start->data);
		start=NULL;

	}

	else 
	{
		temp=start;
		while(temp->next!=start)
			  { pre=temp;
			  	temp=temp->next;}
        
        printf("\nNode Deleted :%d ",temp->data);
		pre->next=temp->next;
	}


}

void traverse()
{
	struct node *temp;
	temp=start->next;

	if(start==NULL)
	{
		printf("\nEmpty List");
		return;
	}
	printf("\nThe List\n");

	printf("%d ",start->data);

	while(temp!=start)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}

}


void main()
     {char ans[3];
      do{int c;
     
      printf("\nChoose from the following\n1.Add a node to the beginning\n2.Add a node to the end\n3.Delete a node at the beginning\n4.Delete a node at the end");
      scanf("%d",&c);
      
      if(c==1)
         {insbeg();
          traverse();}
       
      
      if(c==2)
        {insend();
         traverse();}
      
      if(c==3)
         {delbeg();
          traverse();}
      
      if(c==4)
         {delend();
          traverse();}
      
      printf("\nDo you want to execute the program again (yes/no)");
      scanf("%s",&ans);
      }while(strcmp(ans,"yes")==0);
      }
