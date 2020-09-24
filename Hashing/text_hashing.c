#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct hashtable
 {char x[15];};
 
int search(char word[],int ch,struct hashtable H[])
{int key;
 key=(int)word[0];
 if(key<97 && key>=65)
 {key=key-65;}
 if(word[0]>='a' && word[0]<='z')
 {key=key-97;}
 key=key%26; int flag=0;
 
 
 if(strcmp(H[key].x,word)==0)
    {flag++;}
 else{int ind=key;int j=0;
 while(strcmp(H[key].x,word)!=0)
              {if(ch==1)
                 {key=(key+1)%26;
                  flag++;}
               else if(ch==2)
                  {j++;
                   key=(ind+j*j)%26;
                   flag++;}
               }}
       		printf("\n%s is present at %d",word,key);
       	

       return flag;
}
 

void hash(char word[],int ch,struct hashtable H[])
{int key;
 key=(int)word[0];
 if(key<97 && key>=65)
 {key=key-65;}
 if(word[0]>='a' && word[0]<='z')
 {key=key-97;}
 key=key%26;
 
 if(strcmp("empty",H[key].x)==0)
   {strcpy(H[key].x,word);}
 else
    {if(ch==1)
              {while(strcmp("empty",H[key].x)!=0)
                    {key=(key+1)%26;}
               strcpy(H[key].x,word);
              }
      if(ch==2)
              {int ind=key;int j=0;
               while(strcmp("empty",H[key].x)!=0)
                    {j++;
                     key=(ind+j*j)%26;}
                    strcpy(H[key].x,word);
               }
     }
 }
               
void main()
{
 char str[100]; 
 int l,i,j,k,n;
 printf("\nEnter a line of text");
 scanf("%[^\n]s",str);
 struct hashtable H[26];
 for(i=0;i<26;i++)
    {strcpy(H[i].x,"empty");}
 l=strlen(str);char word[10];
 i=0;k=0;int ch;
 printf("\nChoose the collision resolution method\n1.Linear Probing\n2.Quadratic Probing");
 scanf("%d",&ch);
 while(i<l)
    {
     if(str[i]!=' ')
       {word[k]=str[i];
        k++;i++;}
     if(str[i]==' ' || str[i]=='\0')
        {word[k]='\0';
         hash(word,ch,H);
         k=0;i++;}
     }
     printf("\nHash Table ");
     for(i=0;i<26;i++)
     	{if(strcmp("empty",H[i].x)==0)
            {printf("\n%d\t--",i);}
        else
        {printf("\n%d\t%s",i,H[i].x);}}
     char word2[10];
     printf("\nEnter the word to be searched for(to check key comparisons)");
     scanf("%s",&word2);
     int comp=search(word2,ch,H);
     printf("\nNo:of key comparisons  : %d",comp);
     
     
 
        
 }
  
