#include<stdio.h>

void merge(int X[],int,int,int);


void mergesort(int A[],int first,int last)
     {if(first==last)
         return;
      else
         {int mid=(first+last)/2;
          mergesort(A,first,mid);
          mergesort(A,mid+1,last);
          merge(A,first,mid,last);}}


void merge(int A[],int first,int mid,int last)

     {int j=0;
      int lpt=first;
      int upt=mid+1;
      int n=last+1-first;
      int B[100];

      while(lpt<mid+1 && upt<last+1)
            {   
            	if(A[lpt]<A[upt])
                {B[j]=A[lpt];
                 j++;lpt++;}
            else
                {B[j]=A[upt];
                 upt++;j++;}}

       


     while(lpt<mid+1)
     	   {B[j]=A[lpt];
     	    j+j+1;
     	    lpt=lpt+1;}

     while(upt<last+1)
     	   {B[j]=A[upt];
     	    j++;upt++;}


     lpt=first;

     for(j=0;j<n;j++)
     	{A[lpt]=B[j];
     	 lpt++;}



    }



void main()
     {int i,n,A[100];
      printf("\nEnter the no:of elements");
      scanf("%d",&n);

      printf("\nEnter the elements");
      for(i=0;i<n;i++)
          scanf("%d",&A[i]);

      

     mergesort(A,0,n);

     printf("\nThe sorted array :\n");

     for(i=0;i<n;i++)
     	printf("%d ",A[i]);

 }
