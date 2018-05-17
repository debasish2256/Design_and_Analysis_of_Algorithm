#include<stdio.h>
#include<stdlib.h>
int main()
{               int n,u,m,i,r;
                printf("enter the values for n and u");
                scanf("%d%d",&n,&u);
                printf("enter the value for for x");
                int w[n];
                for(i=0;i<n;i++)
                {
                        scanf("%d",&x[i]);
                }
                printf("enter the valu w");
                int w[n];
                for(int j=0;i<n;i++)
                {
                        scanf("%d",&w[i]);
                }
                int p[n];
                printf("enter the values for p");
                for(int k=0;i<n;i++)
                {
                        scanf("%d",&p[i]);
                }
                for(i=0;i<n;i++)
                {
                        x[i]=0;
                }
                u=m;
                r=0;
                for(i=1;i<=u;i++)
                {
                        if(w[i]>u)
                                break;
                        else
                        x[i]=1;
                        u=u-w[i];
                        r=r+p[i];
                }
                if(i<=n)
                {
                        x[i]=u/w[i];
                        r=r+(x[i]*p[i]);
                }
        return x;
 }
