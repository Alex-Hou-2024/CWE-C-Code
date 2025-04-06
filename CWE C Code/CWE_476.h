#ifndef CWE_476_H
#define CWE_476_H

#include <netdb.h>
#include <arpa/inet.h>

// Function declarations
void CWE_476_HostLookup(char *user_supplied_addr);
void validate_addr_form(char *user_supplied_addr);

#endif // CWE_476_H
