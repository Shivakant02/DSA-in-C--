#include <stdio.h>

int main(){
    int sum=0,product=1;
    int arr[3]={2,3,4};
    for (int i = 0; i < 3; i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    printf("%d\n%d",sum,product);
    return 0;
}