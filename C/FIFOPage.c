#include <stdio.h>

#define MAX_FRAMES 10

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

        // If page is not in the frames, replace the oldest page with the new page
        if (!page_found) {
            frames[frame_index] = pages[i];
            frame_index = (frame_index + 1) % num_frames; // wrap around to the beginning of the frames
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
