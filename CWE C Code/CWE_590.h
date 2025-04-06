#ifndef CWE_590_H
#define CWE_590_H

// Struct definition
typedef struct {
    int data;
} record_t;

// Function declarations
void CWE_590_FreeNonHeapMemory(void);

#define MAX_SIZE 100

#endif // CWE_590_H
