#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifyPassword(char *password, char *validChars, char
*badSubstrings[], int numBadSubstrings) {
    int lenOfPwd = strlen(password);
    char *large;
    char *small;
    if (strspn(password, validChars) == lenOfPwd) {
        for(int i = 0; i < numBadSubstrings; i++) {
            if (lenOfPwd > strlen(badSubstrings[i])) {
                large = password;
                small = badSubstrings[i];
            } else {
                large = badSubstrings[i];
                small = password;
            }
            if(strstr(large, small) == NULL) {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    char *invalidSubstrings[] = { "1234" };
    char *test[] = { "1234", "14425", "!@4214" }; // double pointer의 길이 구하는 방법 몰랐음
    bool valid1 = verifyPassword("1572", "0123456789", invalidSubstrings, 1); // true
    printf("%d\n", valid1);
    bool valid2 = verifyPassword("141234", "0123456789", invalidSubstrings, 1); // false
    printf("%d\n", valid2);

    printf("--%d: ", strlen(test)); // for test
    printf("--%d: ", strlen(test[1])); //
    return 0;
}
