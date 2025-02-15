#include <stdio.h>
int main() {
    int low, high, middle, n, search,i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
	 scanf("%d", &arr[i]);
    }
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    middle = (low + high) / 2;
    while (low <= high) { //o(log n)
	    // if ur search larger than middle then move ur low to mid+1;
        if (arr[middle] < search) 
            low = middle + 1;
        else if (arr[middle] == search) {
            printf("%d",middle);
            break;
	// search is samller than mid move ur high
        } else
            high = middle - 1;
        middle = (low + high) / 2;
    }
// low and high crossed each other 
	// elem not exist
    if (low > high)
        printf("Not found");
}
