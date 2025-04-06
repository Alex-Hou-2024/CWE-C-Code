#include "CWE_484.h"
#include <stdio.h>

// CWE-484: Omission of Break Statement in Switch
// This function demonstrates a vulnerability where the omission of break statements leads to unintended fall-through behavior.
void CWE_484_PrintMessage(int month) {
    switch (month) {
        case 1: printf("January");
        case 2: printf("February");
        case 3: printf("March");
        case 4: printf("April");
        case 5: printf("May");
        case 6: printf("June");
        case 7: printf("July");
        case 8: printf("August");
        case 9: printf("September");
        case 10: printf("October");
        case 11: printf("November");
        case 12: printf("December");
    }
    printf(" is a great month");
}
