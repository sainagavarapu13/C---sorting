#include<stdio.h>
// o(n*c) c is num of digits in max element
int main(){
	int x,i,j;
	scanf("%d",&x);
	int a[x];
	int max = -1;
	for( i=0;i<x;i++){
		scanf("%d",&a[i]);
		if( max <a[i]){
			max = a[i];
		}
	}
	int c = (int)log10(max)+1;
	
	int m[10][x];
	for( i=0;i<=9;i++){
		for(j=0;j<x;j++){
			m[i][j]=0;
		}
	}
	int k = 1;
	while(max){
	int cnt[10]={0};
	for( i=0;i<x;i++){
		int pose = (a[i]/k)%10;
		m[pose][cnt[pose]]=a[i];
		cnt[pose]++;
	}
	int l=0;
	for( i=0;i<=9;i++){
		for(j=0;j<cnt[i];j++){
		
		
				a[l]=m[i][j];
				l+=1;
			
				}
		}
	
	k=k*10;
	max/=10;
	}
	
		
		
	for( i=0;i<x;i++){
	printf("%d ",a[i]);

}
}
