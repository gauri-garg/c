#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%lu" , sizeof(int));
    int a,b;
    a=34;
    b=6;

    printf("a+b= %d\n" ,a+b );
    printf("a-b= %d\n" ,a-b );
    printf("a*b= %d\n" ,a*b );
    printf("a/b= %d\n" ,a/b );
    //we use float(f) in place of d for decimal number and we convert integer in floating number
    return 0;
}
