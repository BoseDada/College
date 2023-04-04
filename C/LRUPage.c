#include <stdio.h>

#define MAX_FRAMES 10

int main() {
    int pages[MAX_FRAMES], frames[MAX_FRAMES], counter[MAX_FRAMES];
    int num_pages, num_frames, page_faults = 0, frame_index = 0;

    printf("Enter the number of pages: ");
    scanf("%d", &num_pages);

    printf("Enter the page reference string: ");
    for (int i = 0; i < num_pages; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter the number of frames: ");
    scanf("%d", &num_frames);

    for (int i = 0; i < num_frames; i++) {
        frames[i] = -1; // initialize frames to -1 (empty)
        counter[i] = 0; // initialize counters to 0
    }

    for (int i = 0; i < num_pages; i++) {
        int page_found = 0;

        // Check if the current page is already in the frames
        for (int j = 0; j < num_frames; j++) {
            if (frames[j] == pages[i]) {
                page_found = 1;
                counter[j] = i + 1; // update counter for this page
                break;
            }
        }

        // If page is not in the frames, find the page with the smallest counter and replace it
        if (!page_found) {
            int smallest_counter_index = 0;

            for (int j = 1; j < num_frames; j++) {
                if (counter[j] < counter[smallest_counter_index]) {
                    smallest_counter_index = j;
                }
            }

            frames[smallest_counter_index] = pages[i];
            counter[smallest_counter_index] = i + 1;
            page_faults++;
        }

        // Print the current state of the frames
        printf("Page %d: [", pages[i]);
        for (int j = 0; j < num_frames; j++) {
            if (frames[j] == -1) {
                printf("_");
            } else {
                printf("%d", frames[j]);
            }

            if (j != num_frames - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
    int page_hit = num_pages - page_faults;
    printf("Total page faults: %d\n", page_faults);
    printf("Total Page Hits: %d\n", page_hit);

    return 0;
}
