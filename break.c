int main(int argc, char const *argv[])
{
    int i,dob;
    for ( i = 0; i <20 ; i++)
    {
       printf("%d\nEnter your date of birth\n", i);
       scanf("%d", &dob);
    //    if (dob>10)
    //    {
    //     break;
    //    }
    if (dob>10)
    {
        continue;
    }
    
    printf("My dob is less then 10\n  ");
       
    }
     
    return 0;
}
