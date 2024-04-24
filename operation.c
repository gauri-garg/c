#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    a=40;
    b=0;
    c=5;
    d=6;

    printf("a==b= %d\n" ,a==b );
    printf("a&&b= %d\n" ,a&&b );
    printf("a||= %d\n" ,a||b );
    printf("!b= %d\n" ,!b );
    printf("c&d= %d\n" ,c&d); 
    printf("c|d= %d\n" ,c|d);
    printf("c^d= %d\n" ,c^d);
    // we can use -,+,*,/ operator in betweeen a and b
    //if a and b are equal then(==) it will return 1 otherwise 0
   // if a and b both are integer then (and operator)&& will give 1 otherwise 0
   // if in a and b only one is integer and the other is not then(or operator)|| it will give 1 and if both are not integer then it will give 0
   // if b is 0 then it(not)! will give 1 and if b have any value then it will give 0
    return 0;
}
