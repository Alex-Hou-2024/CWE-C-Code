#ifndef CWE_469_H
#define CWE_469_H

// Struct definition
struct node {
    int data;
    struct node* next;
};

// Function declarations
int CWE_469_Size(struct node* head);

#endif // CWE_469_H
