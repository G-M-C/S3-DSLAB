Design a method for keeping two stacks with in a single linear array so that neither stacks overflow
until all the memory is used, ( one grows from one side of the array and the other grows from the other
side) . Write all operations of stacks. eg. PUSH(x,S) that pushes element x onto stack S, where is S one
or other of these two stacks. Include all necessary error checks.



#include<stdio.h>
#include<string.h>

# define n 50
int top1=-1;
int top2=n;
int arr[n];
int i;

void push1(int arr[])
		{
			if(top1==n-1 || (top1+1)>=top2)
				{
					printf("\nStack Overflow");
					return;
				}

			else
			{
				top1++;
				printf("\nEnter the element to be stored");
				scanf("%d",&arr[top1]);
				printf("\n%d ",arr[top1]);

			}


		}


void push2(int arr[])
		{
			if(top2==0 || (top1+1)>=top2)
				{
					printf("\nStack Overflow");
					return;
				}

			else
			{
				top2--;
				printf("\nEnter the element to be stored");
				scanf("%d",&arr[top2]);
			}


		}

void del1(int arr[])
		{
			if(top1==-1)
			{
				printf("\nEmpty Stack");
				return;
			}

			else
			{
				printf("\nElement popped : %d ",arr[top1]);
				top1--;
			}

		}

void del2(int arr[])
		{
			if(top2==n)
			{
				printf("\nEmpty Stack");
				return;
			}

			else
			{
				printf("\nElement popped : %d ",arr[top2]);
				top2++;
			}

		}


void traverse1(int arr[])
		{
			if(top1==-1)
			{
				printf("\nEmpty Stack");
				return;
			}

			else
			{
				printf("\nStack1 : \n");
				for(i=top1;i>=0;i--)
					printf("%d ",arr[i]);
			}

		}


void traverse2(int arr[])
		{
			if(top2==n)
			{
				printf("\nEmpty Stack");
				return;
			}

			else
			{
				printf("\nStack 2 : \n");
				for(i=top2;i<=n-1;i++)
					printf("%d ",arr[i]);
			}

		}

void main()
		{
			char ans[3];
			int ch1,ch2;
            
            
				do{
						printf("\nChoose the Stack\n1.Stack1(Grows from beginning)\n2.Stack2(Grows from end)");
					    scanf("%d",&ch1);

					    printf("\nChoose the operation\n1.Push\n2.Pop\n3.Traverse");
					    scanf("%d",&ch2);



					    if(ch2==1)
					    {
					    	if(ch1==1)
					    		push1(arr);

					    	if(ch1==2)
					    		push2(arr);
					    }


					    if(ch2==2)
					    {
					    	if(ch1==1)
					    		del1(arr);

					    	if(ch1==2)
					    		del2(arr);
					    }



                        if(ch2==3)
					    {
					    	if(ch1==1)
					    		traverse1(arr);

					    	if(ch1==2)
					    		traverse2(arr);
					    }

					    

					    printf("\nWant to repeat ?(yes/no)");
					    scanf("%s",&ans);


				}while(strcmp(ans,"yes")==0);
		}
