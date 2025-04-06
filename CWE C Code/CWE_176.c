#include "CWE_176.h"

// CWE-176: Improper Handling of Unicode Encoding
void CWE176_ImproperHandlingOfUnicode(char *username, struct _USER_INFO_2 *info) {
    WCHAR unicodeUser[UNLEN+1];

    // FLAW: Using sizeof(unicodeUser) which may not properly account for the length in WCHARs
    MultiByteToWideChar(CP_ACP, 0, username, -1, unicodeUser, sizeof(unicodeUser));
    NetUserGetInfo(NULL, unicodeUser, 2, (LPBYTE *)info);
}
