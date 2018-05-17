#include<stdio.h>
#include<stdlib.h>



int binsearch(int arr[],int low,int high,int ele)
{

int mid= (high+low)/2;
if(mid%2==0)
mid++;

printf("inside binsearch");
while(low<high)
{

if(arr[mid]==ele)
{

return mid;

}
else if (ele>arr[mid])
{

low=mid+2;

}
else if(ele<arr[mid])
{

high=mid-2;
}

}


return -1;


}



int binsearch2(int arr[],int low,int high,int ele)
{

int mid= (high+low)/2;


printf("inside binsearch");
while(low<high)
{

if(arr[mid]==ele)
{

return mid;

}
else if (ele>arr[mid])
{

low=mid+1;

}
else if(ele<arr[mid])
{

high=mid-1;
}

}


return -1;


}


int main()
{

int n,m,k=-1;

printf("ENETR array size and array elements");

scanf("%d",&n);

//int * arr=(int *)calloc(n,sizeof(int));

int arr[n];

for(int i=0;i<n;i++)
{
printf("inside loop");
scanf("%d",&m);
arr[i]=m;

}

printf("outside loop");

int l;
if(n%2==0)
l=n-1;
else
l=n-2;

for(int j=0;j<n;j=j+2)
{

k=binsearch2(arr,1,l,arr[j]);

if(k!=-1)
break;



}

if(k==-1)
printf("Element not found");
else
printf("Element found at %d index position",k+1);

return 0;




}
