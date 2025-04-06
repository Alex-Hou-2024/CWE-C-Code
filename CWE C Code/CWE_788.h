#ifndef CWE_788_H
#define CWE_788_H

#include <netdb.h>
#include <arpa/inet.h>

// Function declarations
void CWE788_HostLookup(char *user_supplied_addr);
void validate_addr_form(char *addr);

#endif // CWE_788_H
