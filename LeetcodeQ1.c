#include <stdio.h>
#define MAX_SIZE 100   

void runningSum(int nums[], int n, int result[]) {
	int i;
    result[0] = nums[0];
    for ( i = 1; i < n; i++) {
        result[i] = result[i - 1] + nums[i];
    }
}

int main() {
    int nums[MAX_SIZE], result[MAX_SIZE];
    int i,n;

    // Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute running sum
    runningSum(nums, n, result);

    // Print result
    printf("Running Sum: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


