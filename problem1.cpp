/*This program modifies the string by removing the filename*/
#include <stdio.h>


void remove_filename(char *url) {
    char *last_slash = NULL;
    for (char *p = url; *p; p++) { 
        if (*p == '/') {
            last_slash = p;
        }
    }
    if (last_slash != NULL) {
        *last_slash = '\0'; 
    }
}

int main() {
    char url[] = "http://www.google.com/index.html"; 
    printf("Before: %s\n", url); 
    remove_filename(url); 
    printf("After: %s\n", url); 
    return 0;
}
