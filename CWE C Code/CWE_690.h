#ifndef CWE_690_H
#define CWE_690_H

#include <netdb.h>
#include <arpa/inet.h>

// Function declarations
void CWE690_HostLookup(char *user_supplied_addr);
void validate_addr_form(char *addr);

#endif // CWE_690_H
