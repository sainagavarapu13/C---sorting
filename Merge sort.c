#include<stdio.h>
int main(){
	int x,i;
	scanf("%d",&x);
	int a[i];
	for( i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	int y;
	scanf("%d",&y);
	int b[y];
	for( i=0;i<y;i++){
		scanf("%d",&b[i]);
	}
	int m = x+y;
	int c[m];
	i=0;
	int j =0,k=0;
	while( i<x && i<y){
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
