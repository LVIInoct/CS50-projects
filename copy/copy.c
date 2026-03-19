#include <stdio.h>
#include <ctype.h> // for string manipulation functions
#include <string.h>
#include <stdlib.h> // for malloc and free
#include <cs50.h>

int main (void) {

    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1); // malloc allocates enough memory for the length of s plus 1 for the null terminator
    // using strlen (which checks length) makes the program more dynamic

    for (int i = 0; i < strlen(s) + 1; i++) { // the + 1 is for the null terminator, so it copies that as well
        t[i] = s[i]; // copy each character from s to t, making t the actual copy
    }

    t[0] = toupper(t[0]); // capitalize first letter of t to show that it's a different string from s
    printf("s output: %s\n", s);
    printf("t output: %s\n", t);
    free(t); // free the memory allocated for t to prevent memory leaks
}
