#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Lets run about pointer\n");
     int a=20;
     int* ptra=&a;
    // int *ptr2=&a;
     int *ptr2=NULL;
    printf("The value of a is %d",a);
    printf("The value of a is %d", *ptra);
    printf("The value of a is %x", ptra);
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of pointer a is %p\n" , &a);
    printf("The value of a is %p\n", *ptra);
    // printf("The value of some garbage is %p\n", *ptr2);
    printf("The address of some garbage is %p\n", *ptr2);

    return 0;
}
// ptr(pointer) is address which stores the datatypes of another variable here a=*ptra
//%x is a number in hexadecimal(base 16)
// %p is format specifier to print pointer