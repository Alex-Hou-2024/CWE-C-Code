#include "CWE_605.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

// CWE-605: Multiple Binds to the Same Port
// This function demonstrates a vulnerability where multiple binds to the same port can occur.
void CWE_605_BindSocket(void) {
    int server_sockfd;
    int server_len;
    struct sockaddr_in server_address;

    /* Unlink the socket if already bound to avoid an error when bind() is called */
    unlink("server_socket");
    server_sockfd = socket(AF_INET, SOCK_STREAM, 0);

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(21);
    server_address.sin_addr.s_addr = htonl(INADDR_ANY);
    server_len = sizeof(struct sockaddr_in);

    // FLAW: Binding the socket to the port, but missing checks or handling for multiple binds
    bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

    // No further code to prevent or handle multiple binds on the same port
}
