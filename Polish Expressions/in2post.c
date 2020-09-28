#include<stdio.h>
#include<ctype.h>

char stack[50];

int top=-1;

void push(char c)
		{
			top=top+1;

			stack[top]=c;
		}

char pop()
		{
			if(top==-1)
				return -1;
			else
			{
				int x=top;
				top=top-1;
				return stack[x];
			}
		}

int precedence(char c)
		{
			if(c=='(')
				return 0;
			if(c=='+' || c=='-')
				return 1;
			if(c=='*' || c=='/')
				return 2;
			if(c=='^')
				return 3;
		}

void main()
		{
			char ex[50];
			char *g,x;

			printf("\nEnter the Expression");
			scanf("%s",&ex);

			g=ex;

			printf("\nThe Postfix Expression : ");

			while(*g!='\0')
			{
				if(isalnum(*g))
					printf("%c",*g);

				else if(*g=='(')
					 push(*g);


				else if(*g==')')
					 {
					 	while( (x=pop())!='(')

					 		  printf("%c",x);
					 }

				else
				{
					while(precedence(stack[top]) >= precedence(*g))

								printf("%c",pop());
					push(*g);
				}

				g++;

			}
			while(top!=-1)
			{
				printf("%c",pop());
			}
		}
