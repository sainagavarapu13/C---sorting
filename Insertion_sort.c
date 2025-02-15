#include<stdio.h>
int main(){
	int x,i,j,k;
	scanf("%d",&x);
	int a[x];
	for(  i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	for(  i=1;i<x;i++){ // i is first element
		int j = i-1; //last element in sorted array
		int temp = a[i];
		while( j>=0 && a[j]>temp){
			a[j+1] = a[j]; //for insretion , moving every element back side 
			j--; // to find exact position
		}
		a[j+1]=temp; //		
	}
	
	for(i=0;i<x;i++){
		printf("%d ",a[i]);
	}
}
