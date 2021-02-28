#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char *mystrdup(const char *str) {
    // char *heapstr = malloc(sizeof(char) * strlen(str) + 1);
    // strlen(str) + 1. + 1 중요. null terminator 까먹으면 안 됨!
    char *heapstr = malloc(strlen(str) + 1);
    assert(heapstr != NULL);
    strcpy(heapstr, str);
    return heapstr;
}
int main(void) {


    return 0;
}
