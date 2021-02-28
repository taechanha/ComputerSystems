#include <stdio.h>
#include <string.h>

size_t get_total_strlen(char *strs[], size_t num) {
    size_t tot = 0;
    for (int i = 0; i < num; i++) {
        //tot += strlen(strs[i]);    
        tot += strlen(*(strs + i)); 
    }
    return tot;
}

int main(void) {
    char *strs[] = {"JUNE", "MAY", "AUGUST"};
    size_t num = 3;
    printf("%zu\n", get_total_strlen(&strs, num));

    return 0;
}
