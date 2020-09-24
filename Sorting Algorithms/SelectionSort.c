#include<stdio.h>

void sort(int x[],int n,int ch)
     {
     	int i,j,pos,temp;

     	for(i=0;i<n-1;i++)
     		{pos=i;
     		

     		if(ch==1)
     	       {for(j=i+1;j<n;j++)
     	       	    {if(x[j]<x[pos])
     	       	        pos=j;}}



     		if(ch==2)
     	       {for(j=i+1;j<n;j++)
     	       	    {if(x[j]>x[pos])
     	       	        pos=j;}}

     	    if(pos!=i)
     	      {  temp=x[i];
     	      	x[i]=x[pos];
     	       x[pos]=temp;}}
     }



void main()
{
	int i,n,ch,a[20];
	 
	 printf("\nEnter the no of elements in the array ");
	 scanf("%d",&n);

	 printf("\nEnter the array elements ");
	 for(i=0;i<n;i++)
	 	 scanf("%d",&a[i]);

	 printf("\nHow do you  want to sort it ?\n1.Ascending\n2.Descending ");
	 scanf("%d",&ch);

	 sort(a,n,ch);

	 printf("\nThe Sorted Array : ");
	 printf("\n");
	 for(i=0;i<n;i++)
	 	 printf("%d ",a[i]);
}
     