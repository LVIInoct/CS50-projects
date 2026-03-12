#include <stdio.h>
#include <cs50.h>

int main(void) {
    string s = "Hi!";
    printf("%s\n", s); // S is a pointer to the first character in the string "Hi!"
    printf("%p\n", &s); // Address
    printf("%p\n", &s[0]); // Address of the first character 'H'
    // reminder that using & means you're asking for the address of something, not its value
}
