#ifndef CWE_805_H
#define CWE_805_H

#include <netdb.h>
#include <arpa/inet.h>

// Function declarations
void CWE805_HostLookup(char *user_supplied_addr);
void validate_addr_form(char *addr);

#endif // CWE_805_H
