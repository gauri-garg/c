#include <stdio.h>

int main(int argc, char const *argv[])
{
    // char a='3';
    // char* ptra=&a;
    // printf("%d\n" ,ptra );
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);
    int arr[]={1,2,3,4,5,6};
    printf("%d\n", arr[0]);
    printf(" value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of array is %d\n", &arr[0]);
    printf("The address of second element of array is %d", &arr[1]);
    printf("The address of first element of array is %d\n", arr);
    printf("The address of second element of array is %d", arr+1);

    printf(" value at position 3 of the array is %d\n", arr[3]);
    printf("The value at address of first element of array is %d\n",*( &arr[0]));
    printf("The value at address of second element of array is %d\n", *(&arr[1]));
    printf("The value at address of first element of array is %d\n",*( arr));
    printf("The value at address of second element of array is %d\n", *(arr+1));
    return 0;
    // one pointer will add one size of int and +2 means to times size of int (size of int=4) and the size of int depend on architecture
    // if we use char in place of int then one pointer will add one size of char (size of char =2)
    // arr[i]==*(arr+i),int*ptr=arr;

}
