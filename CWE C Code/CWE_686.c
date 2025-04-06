#include "CWE_686.h"

// Mock function to simulate wrong_arguments_func_pointer_001_func_001
int wrong_arguments_func_pointer_001_func_001(int a) {
    return a * 2;
}

// CWE-686: Function Call with Incorrect Argument Type
// This function demonstrates a vulnerability where a function is called with an incorrect argument type.
void CWE_686_WrongArgumentsFuncPointer(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*fptr)(int *);
    int a;

    fptr = (int (*)(int *))wrong_arguments_func_pointer_001_func_001;
    a = fptr(arr); /* FLAW: Wrong arguments passed to a function pointer */
}
