#include "CWE_400.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

// CWE-400: Uncontrolled Resource Consumption
// This function demonstrates a resource exhaustion vulnerability by accepting connections in an infinite loop without control.
void CWE_400_UncontrolledResourceConsumption() {
    int sock, newsock;
    pid_t pid;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("Error creating socket");
        return;
    }

    while (1) {
        newsock = accept(sock, NULL, NULL);
        if (newsock < 0) {
            perror("Error accepting connection");
            continue;
        }
        printf("A connection has been accepted
");

        pid = fork();
        if (pid < 0) {
            perror("Error forking process");
            close(newsock);
        } else if (pid == 0) {
            // Child process
            close(sock);
            // Handle connection
            close(newsock);
            _exit(0);
        } else {
            // Parent process
            close(newsock);
        }
    }
}
