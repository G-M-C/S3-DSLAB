
#include<stdio.h>
#include<stdlib.h>

struct node
	{int data;
         struct node *link;};

struct node *front=NULL,*rear=NULL;

void push()
	{struct node *newnode;
         newnode=(struct node*)malloc(sizeof(struct node));
         if(newnode==NULL)
            {printf("\nMemory Allocation failed");
             exit(0);}
	 
	 printf("\nEnter the value to be stored in the node");
  	 scanf("%d",&newnode->data);
         
         newnode->link=NULL;
         
         if(front==NULL)
	    {front=rear=newnode;}
         
         else
            {rear->link=newnode;
             rear=newnode;}
           
         }

void pop()
	{if(front==NULL)
            printf("\nEmpty Queue");
         
         else
             {struct node *ptr=front;
              printf("\nInfo in the node to be deleted : %d", ptr->data);
              front=front->link;
              free(ptr);}
         }

void traverse()
         {struct node *ptr=front;
          
	  if(ptr==NULL)
	     printf("\nEmpty Queue");
          
          else{
               while(ptr!=rear->link)
                    {printf("%d ---> ",ptr->data);
                     ptr=ptr->link;}}
         }


void main()
     {int ans=1;
     
      int ch;
      while(ans==1){
      printf("\nPlease choose form the below\n1.Push an element to the queue\n2.Pop an element form the queue\n3.Traverse the queue");
      scanf("%d",&ch);
      
      if(ch==1)
         {push();}
          
      if(ch==2)
         {pop();}

      if(ch==3)
        {traverse();}
      
      printf("\nDo you want to repeat ? \n1.To Repeat\n2.To Exit");
      scanf("%d",&ans);
     }}

 
