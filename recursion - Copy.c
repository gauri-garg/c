#include <stdio.h>

int factorial(int number)
{
    if (number==0 || number==1)
    {
        return 1;}
    else{
        return(number * factorial(number-1));
        }       
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to factorial of\n");
    scanf("%d" ,&num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}
