#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void skipSpaces(char **strPtr) {
    // int numSpaces = strspn(*strPtr, " ");
    // *strPtr += numSpaces;
    while(**strPtr == ' ') {
        *strPtr += 1;
    }
}
int main()
{
    char *str = "   hello";
    skipSpaces(&str);
    printf("%s\n", str);
    return 0;
}

