#include<stdio.h>
#include<stdlib.h>


void swap(int arr[],int i,int j)
{

int temp;
   temp=arr[i];

   arr[i]=arr[j];

   arr[j]=temp;


return;

}


void heapify(int arr[],int p)
{



if(arr[2p]>arr[p])
{
   swap(arr,2p,p);
   
}
else if(arr[2p+1]>arr[p])
{

swap(arr,2p+1,p);

}







}


int main()
{








}


