#include <stdio.h>
int subArraySum(int arr[], int n, int sum)
{
    int currentSum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++) {
        if (currentSum > sum) {
            currentSum = currentSum - arr[start];
            start++;
        }
        if (currentSum == sum) {
            printf("Sum found between indexes %d and %d",
                   start, i - 1);
            return 1;
        }

        // Add this element to currentSum
        if (i < n)
            currentSum = currentSum + arr[i];
    }
    printf("No subarray found");
    return 0;
}
int main()
{
    int arr[10],i,n,sum;
    printf("Enter the number of element in the array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    subArraySum(arr, n, sum);
    return 0;
}