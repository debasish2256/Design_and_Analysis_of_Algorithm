#include<stdio.h>
#include<stdlib.h>

void find(int *b,int *w,int m,int i ,int j){
	if (i>0 & j>0){
		if (b[i*m+j]){
			find(b,w,m,i-1,j-w[i-1]);
			printf("%d ",i);
		} else 
			find(b,w,m,i-1,j);
	}
}

int main(){
	int n,c,i,j;
	scanf("%d",&n);
	scanf("%d",&c);
	int *w = (int *)malloc(n*sizeof(int));
	int *p = (int *)malloc(n*sizeof(int));
	int *v = (int *)malloc((n+1)*(c+1)*sizeof(int));
	int *b = (int *)malloc((n+1)*(c+1)*sizeof(int));
	int m = c+1;
	for (i=0;i<n;i++){
		scanf("%d %d",&w[i],&p[i]);
	}
	n++;
	for(i=0;i<n;i++){
		v[i*m] = 0;
	}
	for (i=1;i<m;i++){
		v[i] = 0;
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			b[i*m+j] = 0;
			if (i==0 || j==0)
				v[i*m+j] = 0;
			else if (w[i-1]<=j){
				int cp = p[i-1]+v[(i-1)*m+j-w[i-1]];
				int pp = v[(i-1)*m+j];
				if (cp>pp){
					v[i*m+j] = cp;
					b[i*m+j] = 1;
				} else {
					v[i*m+j] = pp;
				}
			}else
				v[i*m+j] = v[(i-1)*m+j];
			printf("%3d ",v[i*m+j]);
		}
		printf("\n");
	}
	printf("%d is the total profit he will achieve.\n",v[(n-1)*m+c]);
	find(b,w,m,n-1,c);
}