#include "CWE_476.h"
#include <string.h>

// Mock function to simulate address validation
void validate_addr_form(char *user_supplied_addr) {
    // Assume validation occurs here
}

// CWE-476: NULL Pointer Dereference
// This function demonstrates a vulnerability where a NULL pointer is dereferenced if the address lookup fails.
void CWE_476_HostLookup(char *user_supplied_addr) {
    struct hostent *hp;
    in_addr_t *addr;
    char hostname[64];

    // Ensure user_supplied_addr is in the right format for conversion
    validate_addr_form(user_supplied_addr);

    addr = inet_addr(user_supplied_addr);
    hp = gethostbyaddr(addr, sizeof(struct in_addr), AF_INET);

    // FLAW: Potential NULL pointer dereference if gethostbyaddr() fails
    strcpy(hostname, hp->h_name);
}
