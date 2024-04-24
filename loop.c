#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int i=0;
    // while (i<50)
    // {
    //     printf("%d/n",i);
    //     i=i+1;
    //}
    //if we are using multiple variable then the loop will work untill the last condition will not be false
    int i,j;
    for ( i = 0, j=0 ;j < 5, i < 10; i++, j++) 
    {
        printf("%d %d\n", i,j);
    }
    
    
    return 0;
}
