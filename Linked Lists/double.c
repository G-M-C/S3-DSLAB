

Write a menu driven program in C to implement a doubly linked list and to perform the following i) Insert a node at the beginning of the list ii) Insert a node after a particular node in the list iii) Insert a node at the end of the list iv) Delete a node containing a particular item
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
        { int data;
           struct node *next;
           struct node *prev;
        };

struct node *start=NULL;

void insert_beg()
      { struct node *temp;
         
         temp=(struct node *)malloc(sizeof(struct node));
         
         if(temp==NULL)
            {printf("\nOverflow");
             exit(0);}
         
        
        printf("\nEnter the data of the new node");
        scanf("%d",&temp->data);
        
        temp->next=NULL;
        temp->prev=NULL;
        
        if(start!=NULL)
          {temp->next=start;
           start->prev=temp;}
        
        start=temp;}

        
        
      

void insert_pos(int X)
     {struct node *temp,*ptr;
     
       temp=(struct node *)malloc(sizeof(struct node));
     
      if(temp==NULL)
        {printf("\nOverflow");
         exit(0);}
      
      printf("\nEnter the data of the new node");
      scanf("%d",&temp->data);
      
      temp->next=NULL;
      
      ptr=start;
      
      while(ptr->data!=X)
            {ptr=ptr->next;
             if(ptr==NULL)
                {printf("\nSpecified Node not found !!! New Node not added !!!");
                 printf("\nThe Original List : ");
                 return;}}
      
       temp->next = ptr->next;  
       ptr->next = temp;
       temp-> prev = ptr;
       if(temp->next!=NULL)  
       temp->next->prev=temp; }

void delete(int X)
      {struct node *temp;
       
       if(start==NULL)
         {printf("\nUnderflow");
          exit(0);}
       
        temp=start;
        

        while(temp!=NULL)
              { 
                if(temp->data==X)
                { if(temp->next==NULL & temp->prev==NULL)
                     { 
                      start=NULL;
                      return;}
                  if(temp==start)
                  { 
                    start=start->next;
                    start->prev=NULL;
                  }
                  else
                  {
                    if(temp->next == NULL)
                      { 
                        temp->prev->next=NULL;
                        
                       }

                    else
                    { 
                      temp->prev->next=temp->next;
                      temp->next->prev=temp->prev;

                    }
                     
        
                  }
                   return;
                }
                 temp=temp->next;

              }
               printf("\nThe node was not found !!! Deletion has not taken place\nThe Original List :");
      }
   
             
         
      

void insert_end()
     {struct node *temp,*ptr;
      
      temp=(struct node *)malloc(sizeof(struct node));
      
      if(temp==NULL)
        {printf("\nOverflow");
         exit(0);}
      
     printf("\nEnter the data of the new node");
     scanf("%d",&temp->data);
     
     temp->next=NULL;
     
     if(start==NULL)
        {temp->next=NULL;
         temp->prev=NULL;
         start=temp;}
     
     
     else
        {ptr=start;
              while(ptr->next!=NULL)
                      
                      {ptr=ptr->next;}

          ptr->next = temp;  
          temp ->prev=ptr;  
          temp->next = NULL;  
              
        }
     }
     
            
             
                 

void traverse()
     {struct node *ptr;
      ptr=start;
      
      if(ptr==NULL)
        {printf("\nEmpty List");}
     printf("\n");
     while(ptr!=NULL)
          {printf("%d -> ",ptr->data);
           ptr=ptr->next;}
     }
 
void main()
     {char ans[3];
      do{int c;
     
      printf("\nChoose from the following\n1.Add a node to the beginning\n2.Add a node to the end\n3.Add a node after a specific node\n4.Delete a specific node");
      scanf("%d",&c);
      
      if(c==1)
         {insert_beg();
          traverse();}
       
      
      if(c==2)
        {insert_end();
         traverse();}
      
      if(c==3)
         {int s;
          printf("\nEnter the info of the node after which the new node should be added");
          scanf("%d",&s);
          insert_pos(s);traverse();}
      
      if(c==4)
         {int s;
          printf("\nEnter the info of the node to be deleted");
          scanf("%d",&s);
          delete(s);traverse();}
      
      printf("\nDo you want to execute the program again (yes/no) \n");
      scanf("%s",&ans);
      }while(strcmp(ans,"yes")==0);
      }
