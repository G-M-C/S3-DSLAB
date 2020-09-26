#include<stdio.h>
#include<stdlib.h>

struct node
	{int data;
         struct node *link;};

struct node *top=NULL;

void push()
	{struct node *newnode;
         newnode=(struct node*)malloc(sizeof(struct node));
         if(newnode==NULL)
            {printf("\nMemory Allocation failed");
             exit(0);}
	 
	 printf("\nEnter the value to be stored in the node");
  	 scanf("%d",&newnode->data);
         
         newnode->link=NULL;
         
         if(top!=NULL)
            newnode->link=top;
         
         top=newnode;
         }

void pop()
	{if(top==NULL)
            printf("\nEmpty Stack");
         
         else
             {struct node *ptr=top;
              printf("\nInfo in the node to be deleted : %d", ptr->data);
              top=ptr->link;
              free(ptr);}
         }

void traverse()
         {struct node *ptr=top;
          
	  if(ptr==NULL)
	     printf("\nEmpty Stack");
          
          else{
               while(ptr !=NULL)
                    {printf("%d ---> ",ptr->data);
                     ptr=ptr->link;}}
         }


void main()
     {int ans=1;
     
      int ch;
      while(ans==1){
      printf("\nPlease choose form the below\n1.Push an element to the stack\n2.Pop an element form the stack\n3.Traverse the stack");
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
