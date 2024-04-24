#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    // conversion of units
    // kms to mils ,inches to foot,cms to inches, pound to kgs, inches to meters
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character. q to quit\n       1-kms to miles\n       2-inches to foot\n       3-cms to inches\n       4-pound to kgs\n       5- inches to meter\n");
        scanf(" %c", &input);

        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first); 

        switch (input)
        {
        case 'q':
            printf("quiting the program..");
            goto end;
            break;
        case '1':
        second= first*0.621371;
        printf("%f kms is equal to  %f miles\n", first, second);
        break;

        case '2':
        second= first* 0.0833333;
        printf("%f inches is equal to %f foot \n", first, second);
        break;

        case '3':
        second= first*0.393701;
        printf("%f cms is equal to  %f inches\n", first, second);
        break;

        case '4':
        second= first*0.453592;
        printf("%f pound is equal to %f kgs\n", first, second);
        break;

        case '5':
        second= first* 0.0254;
        printf("%f inches is equal to  %f meters\n", first, second);
        break;
        }
    }
end:

    return 0;
}
