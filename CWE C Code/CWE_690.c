#include "CWE_690.h"
#include <string.h>

// Mock function to simulate validate_addr_form()
void validate_addr_form(char *addr) {
    // Simulated validation logic
}

// CWE-690: Unchecked Return Value to NULL Pointer Dereference
// This function demonstrates a vulnerability where the return value is not checked, leading to a potential NULL pointer dereference.
void CWE690_HostLookup(char *user_supplied_addr) {
    struct hostent *hp;
    in_addr_t *addr;
    char hostname[64];
    in_addr_t inet_addr(const char *cp);

    /* routine that ensures user_supplied_addr is in the right format for conversion */
    validate_addr_form(user_supplied_addr);
    addr = inet_addr(user_supplied_addr);
    hp = gethostbyaddr(addr, sizeof(struct in_addr), AF_INET);

    // FLAW: No check if hp is NULL before dereferencing it
    strcpy(hostname, hp->h_name);
}
