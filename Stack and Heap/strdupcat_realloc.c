char *strdupcat(const char *str1, const char *str2) {
    char *heapstr = realloc(
    assert(heapstr != NULL);
    strcpy(heapstr, ___(2)___);
    heapstr = realloc(
    assert(heapstr != NULL);
    strcpy(___(4A)___, ___(4B)___);
    return heapstr;
}
