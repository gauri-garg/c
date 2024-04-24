#include <stdio.h>
#define PI 3.14 
int main(int argc, char const *argv[])
{
   //int a=8;
  //const float b=4.55;
  //PI=7.33 cannot do this since pi is constant 
  printf("tab character \t my backslash \a \n %f" ,PI);
  printf("%f , PI"); 
  // b= 7.22;// cannot do this since b is constant
   //printf("The value of a is %d and the value of b is %10.4f\n ", a,b);
   //printf("%8.4f\n",b);
   //printf("%-8.4f gauri\n",b);
   //.4f shows that the answer will come to four digit after decimal 
   // 10 shows that the variable will take 10 digit space including the number space(6) and the (- )sign shows that the space will come after the digit 
   //const shows that u can't change the variable it is constant, it will show error 

    return 0;
}
