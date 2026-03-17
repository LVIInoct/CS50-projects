#include <stdio.h>
#include <cs50.h>
#include <string.h> // for strcmp function

int main (void){

    string s = get_string("s: ");
    string t = get_string("t: ");

    // these will be different because they're being compared wrong
    if (s == t) {
        printf("equal\n");
    }
    else {
        printf("different\n");
    } // it'll only compare addrersses (given that s and t are pointers for the first char), so it'll always be different

    // now this is how to compare the strings correctly
    if (strcmp(s, t) == 0) { // strcmp returns 0 if the strings are equal
        printf("equal\n");
    }
    else {
        printf("different\n");
    }

    // reason why the first comparison is wrong
    printf("%p\n", s);
    printf("%p\n", t);

}
