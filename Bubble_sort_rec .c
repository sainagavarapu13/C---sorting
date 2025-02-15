#include<stdio.h>
int bubble( int a[],int x,int i,int j){
	// base
	if(i>=x) return;
	if( j>=x-1) return;
	if( j< x-1 && a[j]>a[j+1]){
		int temp = a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
	}
	// stat-1
	bubble( a,x,i,j+1);
	// state 2
	bubble( a,x,i+1,0);  
}
int main(){
	int x,i;
	scanf("%d",&x);
	int a[x];
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
		}
		int l=0;
		int j =0;
		bubble(a,x,l,j);
		for( i= 0;i<x;i++){
			printf("%d ",a[i]);
		}
	}
