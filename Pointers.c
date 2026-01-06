#include <stdio.h>

const int z = 90; // Global variable can not change the value of it normally or with pointer

int main() {
    int x1 = 10; // Renamed to x1 to avoid redefinition
    x1 = 30; // changed the value of x1

    int *ptr = &x1; // & means address the pointer point at the adddress of the x not the value
    *ptr = 40; // dereference changed the value of the x1 not directly

    int y = 3;
    ptr = &y; // ptr only = address  this means i changed the address of ptr from x1 to y //*ptr =value

    // size of pointer depend on comp architecture 4byte or 8 bytes

    // local constant variable cant change the value of it
    const int x2 = 10; // Renamed to x2 to avoid redefinition (and kept const)

    // TO FIX THE const VIOLATION, we remove the lines that attempt to modify x2
    // int* ptr1 = &x2;  // This is where the compiler would warn/error
    // *ptr1 = 30;       // This is Undefined Behavior

    int x3 = 0x12345678; // Renamed to x3 and added missing semicolon

    // We can print the values to show what happened
    printf("x1: %d\n", x1);
    printf("y: %d\n", y);
    printf("x2: %d\n", x2);
    printf("x3: %x\n", x3);
   short *p2 = (short *)&x1;
//only reads the first 2 bytes and i must cast because x1 is not short
p2++; //stepsize to jump another 2 bytes
 unsigned char *p = (unsigned char *)&x1;

    printf("%02X\n", *p);        // Output: 0A   (least significant byte)

    *++p;                        // increment p → now points to 2nd byte
    printf("%02X\n", *p);        // Output: 00

    *p++;                        // use *p (unused), then p moves to 3rd byte
    printf("%02X\n", *p);        // Output: 00

    p++;                         // move to 4th byte
    printf("%02X\n", *p);        // Output: 00

    return 0;
}
