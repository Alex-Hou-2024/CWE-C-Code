#include "CWE_369.h"

// CWE-369: Divide by Zero
// This function demonstrates a divide by zero error when computing the average response time.
int CWE_369_ComputeAverageResponseTime(int totalTime, int numRequests) {
    // Potential divide by zero error if numRequests is zero
    return totalTime / numRequests;
}
