
#include <stdio.h>


int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

	
		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		
		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
	int arr[200] ;
int n,m;
printf("enter the no elements present in array \n");
scanf("%d",&n);
printf("enter the elements \n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the no to search \n");
scanf("%d",&m);
	int result = binarySearch(arr, 0, n - 1, m);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
