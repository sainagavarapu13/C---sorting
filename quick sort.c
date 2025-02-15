#include<stdio.h>
int partion( int a[],int start,int end,int key ){
	int s=start;
	int e= end;
	while( s<e){
		while( a[s]<=key){
			s++;
		}
		while(a[e]>key){
			e--;
		}
    // arrange them in a order if not
		if( s<e){
			int temp = a[e];
			a[e]=a[s];
			a[s]=temp;
		}
		
	}
  // getting index value after arrangemt of samll values in left and larger values in right
	int k = a[e];
	a[e]= key;
	a[start]= k;
	return e;
	
}
void quick( int a[],int x,int start,int end){

	if( start<end){
    // select the elem
		int p = a[start];
    // get index value
    p =partion(a,start,end,p);
		// for 0 to p-1
		quick( a,x,start,p-1);
		//for p+1 to end
		quick(a,x,p+1,end);
 }
}
int main(){
	int x;
	scanf("%d",&x);
	int i;
	int a[x];
  // get unsorted array
	for(i=0;i<x;i++){  // o(n)
		scanf("%d",&a[i]);
	}
	int start = 0;
	int end = x-1;
	quick(a,x,start,end);
  // printing sorted array
	for(  i=0;i<x;i++){
		printf("%d ",a[i]);  //o(n)
	}
}
