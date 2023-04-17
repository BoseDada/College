#include <stdio.h>
#include <stdlib.h>

#define MAX 200

void look(int arr[], int head, int size)
{
    int total_movement = 0;
    int current = head;
    int start_index = 0;
    int end_index = size-1;
    
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > head) {
            start_index = i;
            break;
        }
    }
    
    if (start_index != 0) {
        end_index = start_index-1;
    }
    
    for (int i = start_index; i < size; i++) {
        total_movement += abs(current - arr[i]);
        current = arr[i];
    }
    for (int i = end_index; i >= 0; i--) {
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
    
    look(arr, head, n);
    
    return 0;
}