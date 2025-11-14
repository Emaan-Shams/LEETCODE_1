#include <stdio.h>

#define MAX_SIZE 100 
void transformArray(int nums[], int n) {
    int i, j, temp;

  
    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[MAX_SIZE];
    int n, i;

   
    printf("Enter number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    transformArray(nums, n);

    
    printf("Output: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

