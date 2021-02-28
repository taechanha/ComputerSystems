char *strdupcat(const char *str1, const char *str2) {
    char *heapstr = malloc(strlen(str1) + strlen(str2) + 1);
    assert(heapstr != NULL);
    strncpy(heapstr, str1, srtlen(str1));
    strncpy(heapstr + strlen(str1), str2, strlen(str2) + 1);
    // strlen(str2) -> w/o Null terminator
    // strlen(str2) + 1 > w/. 알아서 채움

    return heapstr;
}
