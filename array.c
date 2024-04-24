#include <stdio.h>

int main(int argc, char const *argv[])
{    //this is 1d array
    //   int marks[5]= {2,45,12,75,65};
    //   for (int i = 0; i < 5; i++)
    // {
    //    printf("the value of %d element of the array %d\n",i, marks[i]);
    // }

//by this we use array by input value 2nd method
   // int marks[5];
    // for (int i = 0; i < 5; i++)
    // {
    //    printf("Enter the value of %d element of the array\n",i);
    //     scanf("%d" , &marks[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //    printf("the value of %d element of the array %d\n",i, marks[i]);
        
    // }
    //by this we can directly print only for example
    // marks[0]=40;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[1]=50;
    // marks[2]=570;
    // marks[3]=509;
    // marks[4]=505;
    // printf("marks of student 5 is %d\n", marks[4]);
    // printf("marks of student 2 is %d\n", marks[1]);
    // printf("marks of student 3 is %d\n", marks[2]);
    // printf("marks of student 4 is %d\n", marks[3]);


    //this is 2d array
    int marks[2][5]= {{2,52,75,65},{2,5,3,4,3}};
      for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 5; j++)
      {
      //printf("the value of %d,%d element of the array %d\n",i,j, marks[i][j]);
      //for matrix formation 
        printf("%d ", marks[i][j]);
     }
     printf("\n"); 
    }
    return 0;
}
//1D array is like list ans 2D array is like table