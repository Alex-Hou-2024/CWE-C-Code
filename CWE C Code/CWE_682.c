#include "CWE_682.h"

// Mock function to simulate get_num_imgs()
int get_num_imgs(void) {
    return 100; // Example number of images
}

// CWE-682: Incorrect Calculation
// This function demonstrates a vulnerability where an incorrect calculation may occur, leading to improper allocation.
img_t* CWE_682_AllocateImageTable(int num_imgs) {
    img_t* table_ptr;

    // FLAW: Potentially incorrect calculation of memory allocation
    table_ptr = (img_t*)malloc(sizeof(img_t) * num_imgs);

    return table_ptr;
}
