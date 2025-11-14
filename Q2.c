#include <stdio.h>
#define MAX_SIZE 100   

void shuffleArray(int nums[], int n, int result[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        result[j++] = nums[i];     
        result[j++] = nums[i + n]; 
    }
}
int main() {
    int nums[MAX_SIZE], result[MAX_SIZE];
    int n, size, i;

    
    printf("Enter value of n: ");
    scanf("%d", &n);
    size = 2 * n;
    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    shuffleArray(nums, n, result);

    printf("Output: ");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

