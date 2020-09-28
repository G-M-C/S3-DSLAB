#include<stdio.h>
#include<ctype.h>
#include<math.h>

int stack[50];
int top = -1;
 
void push(int x)
{
    top=top+1;
    stack[top]=x;
}
 
int pop()
{
    int x=top;
    top=top-1;
    return stack[x];
}
 
int main()
{
    char exp[50];
    char *g;
    int n1,n2,n3,num;
    printf("Enter the Postfix Expression");
    scanf("%s",&exp);
    g = exp;
    while(*g != '\0')
    {
        if(isdigit(*g))
            {
                num = (int)*g - 48;
                push(num);
            }
        

        else
            {
                n1 = pop();
                n2 = pop();

                if(*g=='+')
                    n3=n2+n1;

                else if(*g=='-')
                     n3=n2-n1;

                else if(*g=='*')
                     n3=n2*n1;

                else if(*g=='/')
                     n3=n2/n1;

                else if(*g=='^')
                     n3=pow(n2,n1);

                push(n3);

            }

            
            g++;

    }

        

printf("\nResult of Postfix Expression %s  = %d  ",exp,stack[top]);

}
