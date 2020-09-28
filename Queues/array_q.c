#include<stdio.h>

int front=-1;
int rear=-1;
int n=100;


void push(int q[])
     {
       if(rear==n-1)
       	  printf("\nQueue Overflow");

       else
       	    {if(front==-1)
       	        front=0;

       	     printf("\nEnter the element to be stored in the Queue");
       	     int x;
       	     scanf("%d",&x);

       	     rear++;
       	     q[rear]=x;
       	    }
     }

void pop(int q[])
     {
       if(front==-1 || front>rear)
       	  printf("\nQueue Underflow");

       else
       	   {
       	   	printf("\nElement deleted from the Queue : %d ",q[front]);
       	   	front=front+1;

       	   }

     }

void traverse(int q[])
      {
      	if(front==-1 || front>rear)
      	   printf("\nEmpty Queue");

      	else
      	{
      		printf("\nThe Queue Elements --> ");
      		
      		for(int i=front;i<=rear;i++)
      			printf("%d : ",q[i]);

      		printf("\n");
      	}
      }
void main()
{int ans=1;
     
      int q[100];int ch;
      while(ans==1){
      printf("\nPlease choose form the below\n1.Push an element to the Queue\n2.Pop an element form the Queue\n3.Traverse the Queue");
      scanf("%d",&ch);
      
      if(ch==1)
         {push(q);}
          
      if(ch==2)
         {pop(q);}

      if(ch==3)
        {traverse(q);}
      
      printf("\nDo you want to repeat ? \n1.To Repeat\n2.To Exit");
      scanf("%d",&ans);
     }}
