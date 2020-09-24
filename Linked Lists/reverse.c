Write a program in C to reverse a given singly linked list
Preena K P
•
Aug 24, 2019 (Edited Aug 24, 2019)
100 points
Due Oct 4, 2019
Class comments


Your work
Turned in late

llrev.c
C
Private comments


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
       {char data[10];
         struct node * link;};

struct node *start=NULL;

void insert_node()

	{   
		struct node *new_node;

		new_node=(struct node *)malloc(sizeof(struct node));
		
		if(new_node==NULL)
			{printf("\nMemory Allocation failed");}
		
		else{
		printf("\nEnter the string to be stored in the node  ");
		scanf("%s",&new_node->data);
		new_node->link=NULL;

		if(start!=NULL)
			new_node->link=start;
		start=new_node;}
    }

void traverse()
	{
		struct node *ptr;
		ptr=start;

		if(ptr==NULL)
			printf("\nEmpty List");

		else
			{ printf("\n");
              while(ptr!=NULL)
                   {printf("%s -> ",ptr->data);
                    ptr=ptr->link;}}
	}

void reverse()
     { struct node *prev,*cn;

       if(start != NULL)
       {
        prev = start;
        cn = start->link;
        start = start->link;
        prev->link = NULL; 

        

        while(start != NULL)
        {
            start = start->link;
            cn->link = prev;

            prev = cn;
            cn = start;

        
        }

     

        start = prev; 
       
        
       }

      }

void main()
     {
     	int n,i;
     	
     	printf("\nEnter the no:of nodes to be inserted");
     	scanf("%d",&n);
     	
     	for(i=0;i<n;i++)
     		insert_node();

     	printf("\nCurrent Link List :: ");
     	traverse();

     	printf("\nReversed Link List ::");
     	reverse();
     	traverse();

     }
