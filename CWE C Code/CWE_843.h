#ifndef CWE_843_H
#define CWE_843_H

// Macros for message types
#define NAME_TYPE 1
#define ID_TYPE 2

// Struct definition
struct MessageBuffer {
    int msgType;
    union {
        char *name;
        int nameID;
    };
};

// Function declarations
void CWE843_TypeConfusion(void);

#endif // CWE_843_H
