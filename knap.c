#include<stdio.h>
#include<stdlib.h>
struct node
{
int data,w,p;
}*a;


void  knap(int n,int w[],int l)
{  
   int i,j,p[n];
   int p1[n+1][l+1];
   int v[n+1][l+1];
   for(j=0;j<=l;j++)
   {
           v[0][j]=0;
   }
   for(i=1;i<=n;i++)
   {
           v[i][j]=0;
   }
   for(j=1;j<l;j++)
   {
           if(v[i-1][j-w[i-1]]+p[i-1]>v[i-1]>v[i-1][j])
           {
                v[i][j]=v[i-1][j-w[i-1]]+p[i-1];
                p1[i][j]=1;
           }
        else
        {
                v[i][j]=v[i-1][j];
        }
   }
}
void main()

{
int n;
printf("enter the no.of objects");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
        a[i]=(struct node*)malloc(sizeof(struct node));
        printf("enter weight and price");
        scanf("%d %d",&a[i]->w,&a[i]->p);
        a[i]->p=a[i]->p/a[i]->w;
                                                     


}
}


