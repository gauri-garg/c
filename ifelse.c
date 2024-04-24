#include <stdio.h>

int main(int argc, char const *argv[])
{
    int subject;
    printf("Enter number of passing subject\n");
    scanf("%d" , &subject);
    printf("you have entered %d as number of your passing subject\n", subject);
    if (subject>=2)                                                    
    {
        printf("you have passed two exam now you are recieving 45 rupees as reward");
    }
    else if (subject=1)
    {
        printf("you have passed one exam now you are recieving 20 rupees as reward");
    }
    else{
        printf(" you are not eligible for reward");
    }
    
    return 0;
}
