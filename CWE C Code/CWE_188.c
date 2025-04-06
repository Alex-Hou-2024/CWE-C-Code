#include "CWE_188.h"

// CWE-188: Reliance on Data/Memory Layout
void CWE188_RelianceOnDataMemoryLayout(void) {
    char a;
    char *pchar = &a;

    // FLAW: This assumes that char * pointers can be incremented by sizeof(a) bytes
    pchar = pchar + sizeof(a);
}
