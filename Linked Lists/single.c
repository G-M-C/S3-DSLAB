#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
        { char ch[10];
           struct node *next;
        };

struct node *start=NULL;

void insert_end()
     {struct node *temp,*ptr;
      
      temp=(struct node *)malloc(sizeof(struct node));
      
      if(temp==NULL)
        {printf("\nOverflow");
         exit(0);}
      
     printf("\nEnter the data of the new node");
     scanf("%s",&temp->ch);
     
     temp->next=NULL;
     
     if(start==NULL)
        {start=temp;}
     
     
     else
        {ptr=start;
              while(ptr->next!=NULL)
                      
                      {ptr=ptr->next;}
              
              ptr->next=temp;}
     }
     

void insert_beg()
      { struct node *temp;
         
         temp=(struct node *)malloc(sizeof(struct node));
         
         if(temp==NULL)
            {printf("\nOverflow");
             exit(0);}
         
        
        printf("\nEnter the data of the new node");
        scanf("%s",&temp->ch);
        
        temp->next=NULL;
        
        if(start==NULL)
           {start=temp;}
        
        else
            {temp->next=start;
             start=temp;}
        }

void insert_pos(char a[])
     {struct node *temp,*ptr;
     
       temp=(struct node *)malloc(sizeof(struct node));
     
      if(temp==NULL)
        {printf("\nOverflow");
         exit(0);}
      
      printf("\nEnter the data of the new node");
      scanf("%s",&temp->ch);
      
      temp->next=NULL;
      
      ptr=start;
      
      while(strcmp(a,ptr->ch)!=0)
            {ptr=ptr->next;
             if(ptr==NULL)
                {printf("\nNode not found");
                 return;}}
      
      temp->next=ptr->next;
      ptr->next=temp;}

void delete(char a[])
      {struct node *temp,*ptr;
       
       if(start==NULL)
         {printf("\nUnderflow");
          exit(0);}
       
       
       ptr=start;
       temp=ptr;
       
         while(strcmp(a,ptr->ch)!=0)
            {temp=ptr;
             ptr=ptr->next;
             if(ptr==NULL)
                {printf("\nNode not found");
                 return;}}
             
             temp->next=ptr->next;
             printf("\nInformation in the node going to be deleted : %s ",ptr->ch);
             free(ptr);}

void traverse()
     {struct node *ptr;
      ptr=start;
      
      if(ptr==NULL)
        {printf("\nUndeflow");}
     printf("\n");
     while(ptr!=NULL)
          {printf("\%s -> ",ptr->ch);
           ptr=ptr->next;}
     }
 
void main()
     {char ans[3];
      do{int c;
     
      printf("\nChoose from the following\n1.Add a node to the beginning\n2.Add a node to the end\n3.Add a node after a specified node\n4.Delete a specific node");
      scanf("%d",&c);
      
      if(c==1)
         {insert_beg();
          traverse();}
       
      
      if(c==2)
        {insert_end();
         traverse();}
      
      if(c==3)
         {char s[20];
          printf("\nEnter the info of the node after which the new node should be added");
          scanf("%s",&s);
          insert_pos(s);traverse();}
      
      if(c==4)
         {char s[20];
          printf("\nEnter the info of the node to be deleted");
          scanf("%s",&s);
          delete(s);traverse();}
      
      printf("\nDo you want to execute the program again (yes/no)");
      scanf("%s",&ans);
      }while(strcmp(ans,"yes")==0);
      }
      
