#ifndef CWE_570_H
#define CWE_570_H

// Function declarations
int CWE_570_HasReadWriteAccess(unsigned int userMask);

#define BIT_READ 0x0001 // 00000001
#define BIT_WRITE 0x0010 // 00010000

#endif // CWE_570_H
