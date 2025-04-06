#include "CWE_483.h"

// Mock function to simulate Do_X()
void Do_X() {
    // Implementation of Do_X
}

// Mock function to simulate Do_Y()
void Do_Y() {
    // Implementation of Do_Y
}

// CWE-483: Incorrect Block Delimitation
// This function demonstrates a vulnerability where an incorrect block delimitation leads to unintended behavior.
void CWE_483_IncorrectBlockDelimitation(bool condition) {
    if (condition == true)
        Do_X();
    Do_Y();  // FLAW: Do_Y() will execute regardless of the condition, potentially leading to unexpected behavior
}
