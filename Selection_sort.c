#include<stdio.h>
int main(){
	int x,i,j;
	scanf("%d",&x);
	int a[x];
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	//selection sort
	for( i=0;i<x;i++){
			for( j=i+1;j<x;j++){
			if( a[i] >a[j]){
				idx =j;
			}
		}
		int temp = a[i];
		a[i] =a[idx];
		a[idx] = temp;
	}	for(i=0;i<x;i++){
	printf("%d ",a[i]);
	}
	
}
