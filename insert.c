#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

void insertion(int a[],int k)
{       int i,j,temp;
         for(i=1;i<=k;i++)
                        {       
                               temp=a[i];
                               j=i-1;
                               while(j>0 && a[j]>temp)
                               {       
                                    a[j+1]=a[j];
                                    j--;
                               }
                               a[j+1]=temp;
                         }
  }
  void display(int a[],int k)
  {     int i;
         for(i=1;i<=k;i++)
            {
               printf("%d\n",a[i]);
            }
   }
                         
int main()
{       
        int i,k,j,temp;
        long int s=0;
        struct timeval t1,t2;
                for(k=1000;k<=5000;k+=1000)
                  {    for(n=0;n<5;n++)
                        {
                                int *a=(int*)malloc(k*sizeof(int));
                                for(i=0;i<k;i++)
                                {       
                                        a[i]=random()%100;
                                }
                                display(a,k);
                                for(i=0;i<k-1;k++)
                                {
                                        for(j=0;j<k-1-i:k++)
                                         {
                                                if(a[j]>a[j+1)
                                                swap(a[j],a[j+1]);
                                         }
                                }
                                 gettimeofday(&t1,NULL);
                                 insertion(a,k);
                                gettimeofday(&t2,NULL);
                                long int d=(((t2.tv_sec-t1.tv_sec)*1000000l)+(t2.tv_usec-t1.tv_usec));
                                s=s+d;  
                       }
                       
                    long int avg=s/5;
                    printf("\naverage time \n%ld",avg);
 }
                         
                         
