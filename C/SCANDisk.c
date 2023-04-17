#include <stdio.h>
#include <stdlib.h>

#define MAX 200

void scan(int arr[], int head, int size)
{
    int total_movement = 0;
    int current = head;
    int start_index = 0;
    int i;
    
    for (i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (i = 0; i < size; i++) {
        if (arr[i] > head) {
            start_index = i;
            break;
        }
    }
    
    for (i = start_index; i < size; i++) {
        total_movement += abs(current - arr[i]);
        current = arr[i];
    }
    
    total_movement += abs(current - 199);
    current = 199;
    
    for (i = start_index-1; i >= 0; i--) {
        total_movement += abs(current - arr[i]);
        current = arr[i];
    }
    
    printf("Total head movement = %d\n", total_movement);
}

int main()
{
    int n, head, arr[MAX];
    
    printf("Enter the size of the request queue: ");
    scanf("%d", &n);
    
    printf("Enter the initial position of the disk head: ");
    scanf("%d", &head);
    
    printf("Enter the request queue: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scan(arr, head, n);
    
    return 0;
}