#include<stdio.h>
#include<stdlib.h>
int main()
{               int i,n;
                printf("enter the values for n");
                scanf("%d",&n);
                printf("enter the values for for x");
                int x[n];
                int w[n];
                for(i=0;i<n;i++)
                {
                        scanf("%d",&x[i]);
                }
                printf("enter the valu w");
                for(int j=0;i<n;i++)
                {
                        scanf("%d",&w[i]);
                }
                for(i=0;i<n;i++)
                {
                do
                {
                x[i]=0;
                int weight=0;
                for(i=0;i<n;i++)
                {
                        if(weight+w[i]<=w)
                        {
                                x[i]=1;
                                weight=weight+w[i];
                        }
                        else
                        {
                                x[i]=int(w-weight)
                                /(w[i]);
                                weight=w;
                        break;
                        }
                }
                }
                }
                return x;
                }
                
