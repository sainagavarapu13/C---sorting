#include<stdio.h>
//time complexity = nlogn
int main(){
	int x,i;
	// size of first sorted array
	scanf("%d",&x);
	int a[i];
	for( i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	// second sorted array
	int y;
	scanf("%d",&y);
	int b[y];
	for( i=0;i<y;i++){
		scanf("%d",&b[i]);
	}
	// let us take size of temp array by adding two size of two arrays
	int m = x+y;
	int c[m];
	i=0;
	int j =0,k=0;
	// keep the minimum element from two sorted arrays
	while( i<x && j<y){
		if( a[i] < b[j]){
			c[k]=a[i];
			k++;
			i++;
		}else{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	// place remaining elem 
	while( i<x){
	
	 c[k]=a[i];
	 k++;
	 i++;
}
	while ( j<y){
	
	 c[k]=b[j];
	 k++;
	 j++;
}
	for( i=0;i<m;i++){
		printf("%d ",c[i]);
	}
}
