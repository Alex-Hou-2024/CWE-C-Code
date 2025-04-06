#include "CWE_126.h"
#include <string.h>

#define BUFFER_SIZE 256
#define MESSAGE_SIZE 128

typedef struct {
    int msgLength;
    char msgBody[BUFFER_SIZE];
} ExMessage;

// Mock function to simulate receiving a message from a socket
int getMessage(int socket, char *buffer, int bufferSize) {
    // Simulate a message longer than BUFFER_SIZE
    memset(buffer, 'A', bufferSize + 10);
    return bufferSize + 10; // Returning a length greater than bufferSize to simulate overflow
}

// Mock function to recast buffer into a message structure
ExMessage* recastBuffer(char *buffer) {
    static ExMessage msg;
    msg.msgLength = BUFFER_SIZE; // Assume max length
    strncpy(msg.msgBody, buffer, BUFFER_SIZE);
    return &msg;
}

// Mock function to process the message
int processMessage(char *message) {
    // Simulate message processing
    return 1; // Success
}

// CWE-126: Buffer Over-read
// This function demonstrates a buffer over-read vulnerability by copying
// data from a buffer to a message string without proper bounds checking.
int CWE_126_ProcessMessageFromSocket(int socket) {
    int success;

    char buffer[BUFFER_SIZE];
    char message[MESSAGE_SIZE];

    // Get message from socket and store into buffer
    if (getMessage(socket, buffer, BUFFER_SIZE) > 0) {
        // Place contents of the buffer into message structure
        ExMessage *msg = recastBuffer(buffer);

        // Copy message body into string for processing
        int index;
        for (index = 0; index < msg->msgLength; index++) {
            // CWE-126 vulnerability: buffer over-read
            // Reading beyond the bounds of msg->msgBody can cause undefined behavior
            message[index] = msg->msgBody[index];
        }
        message[index] = '\0';

        // Process message
        success = processMessage(message);
    }
    return success;
}
