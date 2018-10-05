

#include <stdio.h>

void main(){
    // "This is test line" into Array "a[]"
    static char a[25] = "This is test line.";

    // declare int b
    int b;

    // 300 as hexadecimal number into b
    b = 0x300;

    // %s is to represent a[] as String
    printf(" **** Strings is : %s ****\n", a);

    // %x is to represent b as hexadecimal number
    printf(" **** Value   is : %x ****\n", b);


    // Output the following:
    //  **** Strings is : This is test line. ****
    //  **** Value   is : 300 ****

}
