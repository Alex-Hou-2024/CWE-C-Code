#include "CWE_190.h"
#include <stdlib.h>

// Mock function to simulate getting the number of images
int get_num_imgs() {
    return 214748364; // A large value to demonstrate potential overflow
}

// CWE-190: Integer Overflow or Wraparound
// This function demonstrates an integer overflow vulnerability during memory allocation.
img_t* CWE_190_AllocateImageTable(int num_imgs) {
    img_t *table_ptr;

    // Potential for integer overflow if num_imgs is large enough
    table_ptr = (img_t*)malloc(sizeof(img_t) * num_imgs);

    if (table_ptr == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    return table_ptr;
}
