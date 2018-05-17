#include<stdio.h>
#include<stdlib.h>
void insertion(int a[],int k)
{       int i,j,temp;
         for(i=k-1;i>=0;i--)
          {       
              temp=a[i];
              j=i+1;
              while(j<k && a[j]<temp)
              {       
                 a[j-1]=a[j];
                 j++;
              }
              a[j-1]=temp;
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
       
         int *a=(int*)malloc(10*sizeof(int));
         for(i=0;i<10;i++)
          {       
                a[i]=random()%100;
          }
           display(a,10);
           insertion(a,10);
              display(a,10);         
                  
 }
                         
                         
