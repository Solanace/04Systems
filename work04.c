#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strchr_demo(char *s, char find) {
    char *result = strchr(s, find);
    printf("Found '%c' in \"%s\" starting at \"%s\"\n", find, s, result);
}

void strstr_demo(char *s, char *find) {
    char *result = strstr(s, find);
    printf("Found \"%s\" in \"%s\" starting at \"%s\"\n", find, s, result);
}

int main() {
    printf("strchr\n--------------------\n");
    char *s = "the bird winged his test";
    strchr_demo(s, 'e');
    strchr_demo(s, 'z');
    strchr_demo(s, '\0');
    
    printf("\nstrstr\n--------------------\n");
    s = "it was unbeakoming of him";
    strstr_demo(s, "beak");
    strstr_demo(s, " him");
    return 0;
}
