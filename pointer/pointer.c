#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n; // p is a pointer to an integer, and it holds the address of n
    // the asterisk means P is storing an address of a variable, not the variable itself. Pointers usually take 8 bytes
    printf("%p\n", p); // prints n's address (not value) in memory. %p is for an address of something/pointer
    printf("%i\n", *p); /* here, p prints n by being a "dereference operator" by using the asterisk to dereference p,
    which basically tells the program to get whatever P is pointing at (n in this case.)*/
}
