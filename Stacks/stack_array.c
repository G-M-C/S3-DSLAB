#include<stdio.h>
#include<stdlib.h>

int n=50;int top=-1;

void push(int stack[])
          {
           if(top>=n-1)
              {printf("\nOveflow");}
            
            else
                {int x;
                 printf("\nEnter the data");
                 scanf("%d",&x);
                 top++;
                 stack[top]=x;}
           }

void pop(int stack[])
        {
         if(top<=-1)
           {printf("\nUnderflow");}
          
         
         else
             {printf("\nThe data in the node that was popped: %d",stack[top]);
              top--;}
              
         }

void traverse(int stack[])
              {
               if(top<=-1)
                  {printf("\nUndeflow");}
                
               else
                   { printf("\nThe Stack :: \n");
                     for(int i=top;i>=0;i--)
                        {printf("%d : ",stack[i]);}
                   }
               }

void main()
     {int ans=1;
     
      int stack[50];int ch;
      while(ans==1){
      printf("\nPlease choose form the below\n1.Push an element to the stack\n2.Pop an element form the stack\n3.Traverse the stack");
      scanf("%d",&ch);
      
      if(ch==1)
         {push(stack);}
          
      if(ch==2)
         {pop(stack);}

      if(ch==3)
        {traverse(stack);}
      
      printf("\nDo you want to repeat ? \n1.To Repeat\n2.To Exit");
      scanf("%d",&ans);
     }}
