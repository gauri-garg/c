#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d" , &age);

    printf("Enter your marks\n");
    scanf("%d" , &marks);

    switch (age)
    {
    case 13:
        printf("The age is 13\n");
        switch (marks)
        {
        case 40:
            printf("The marks are 40\n");
            break;
        
        default:
            break;
        }
        //break;
    
    case 23:
        printf("The age is 23");
        break;
    
    default:
    printf("The age is not 13,23");
        break;
    }
    return 0;
}
