#include<stdio.h>

void sort(int arr[],int n,int ch){
	  int i,j,X;

	  for(i=1;i<n;i++){

	  	  X=arr[i];
	  	  j=i-1;

	  	  if(ch==1){

	  	     while(j>=0 && arr[j]>X){

	  	  	       arr[j+1]=arr[j];
	  	  	       j--;
	  	      }
	  	           }
	  	  if(ch==2){

	  	  	 while(j>=0 && arr[j]<X){

	  	  	       arr[j+1]=arr[j];
	  	  	       j--;
	  	      }

	  	           }
	  	  arr[j+1]=X;  }

	}



void main(){

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