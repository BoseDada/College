#include <stdio.h>

#define MAX_FRAMES 10
#define INFINITY 9999

int main() {
    int pages[MAX_FRAMES], frames[MAX_FRAMES];
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
    }

    for (int i = 0; i < num_pages; i++) {
        int page_found = 0;

        // Check if the current page is already in the frames
        for (int j = 0; j < num_frames; j++) {
            if (frames[j] == pages[i]) {
                page_found = 1;
                break;
            }
        }

        // If page is not in the frames, find the page with the farthest next reference and replace it
        if (!page_found) {
            int farthest_next_index = -1;
            int farthest_next_distance = -1;

            for (int j = 0; j < num_frames; j++) {
                int next_index = INFINITY;

                for (int k = i + 1; k < num_pages; k++) {
                    if (frames[j] == pages[k]) {
                        next_index = k;
                        break;
                    }
                }

                if (next_index == INFINITY) {
                    farthest_next_index = j;
                    break;
                }

                if (next_index > farthest_next_distance) {
                    farthest_next_distance = next_index;
                    farthest_next_index = j;
                }
            }

            frames[farthest_next_index] = pages[i];
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
    printf("Total page Hits: %d\n", page_hit);

    return 0;
}
