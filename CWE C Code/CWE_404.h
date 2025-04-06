#ifndef CWE_404_H
#define CWE_404_H

// Function declarations
int CWE_404_DecodeFile(char* fName);
int checkChecksum(char* buf);
void decodeBlock(char* buf);

#define BUF_SZ 1024
#define DECODE_FAIL -1
#define DECODE_SUCCESS 0

#endif // CWE_404_H
