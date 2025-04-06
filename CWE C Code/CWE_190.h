#ifndef CWE_190_H
#define CWE_190_H

typedef struct {
    char data[10240]; // 10kB each
} img_t;

// Function declarations
img_t* CWE_190_AllocateImageTable(int num_imgs);

#endif // CWE_190_H
