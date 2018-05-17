#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b);
int lcs(char *x,char *y,int m,int n)
{
if(m==0 || n==0)
return(0);
if(x[m-1]==y[n-1])
return(1)+lcs(x,y,m-1,n-1);
else
return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
}
int max(int a,int b)
{
return(a>b)? a:b;
}
int main()
{
char x[]="kiit";
char y[]="kiims";
int m=strlen(x);
int n=strlen(y);
printf("length of lcs is%d\n",lcs(x,y,m,n));
return(0);
}
