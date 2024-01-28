

#include <stdio.h>

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver's code
int main(void)
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
	
	int result = search(arr,n,m );
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
