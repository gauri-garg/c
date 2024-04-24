#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Hello world\n");


    printf("Enter number a\n");
    scanf("%d" , &a);

    printf("Enter number b\n");
    scanf("%d" , &b);

    printf("Enter number c\n");
    scanf("%d" , &c);
    


    printf("The result is %d\n", a+b/c);

    return 0;
}
