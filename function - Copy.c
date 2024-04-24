#include <stdio.h>
int sum ( int a, int b );
void printstar( int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*'); //character takes single code ''
    }
    
}
int takenumber()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    return i;
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    a=7;
    b=9;
    // c=sum(a,b);
    // printstar(7);
    c= takenumber();
    printf("the number entered is %d\n", c);
    //printf("the sum is %d\n", c);
return 0;
}
int sum (int a, int b){
    return a+b;
}
//from line 3 to 10 is call of funtion, 12-14 is define function .we must type define befor call otherwisw it will not run ,if we put call befor the define we need to declare funtion before call.
// funvtion has 4 type this is first (sum) "with argument with return"
// second type is(star) with argument without return value .
// the third type is takenumber "without argument with return value "