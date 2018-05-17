#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{

int arr[10];

printf("ENTEr 10 ELEMENTS");

int t;
int min =INT_MAX;

int temp; 



for(int i=0;i<10;i++)
{

scanf("%d",&t);

arr[i]=t;

}


for(int j=0;j<10;j++)
{
    
    for(int k=j+1;k<10-1;k++)
    {
    
    temp=arr[j]-arr[k];
    
    if(temp<0)
    temp=-1*temp;
    
    
    if(temp<min)
    min=temp;
    
    }







}


printf("MINIMUM DISTANCE IS %d",min);

return 0;






}
