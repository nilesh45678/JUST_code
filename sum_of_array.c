//Sum of Array & Average of array

#include <stdio.h>
#include <stdlib.h>

int sumofArray(int array[], int len)
{
    int sum_valu = 0;
    int Average;

    for (int i = 0; i < len; i++)
    {
        sum_valu += array[i];   
    }

    return sum_valu;
}

int AveragefArray(int array[], int len)
{
    int sum_valu = 0;
    int Average;

    for (int i = 0; i < len; i++)
    {
        sum_valu += array[i];   
    }
    Average = sum_valu / len;

    return Average;
}

int main()
{
    int myarray1[] = {4, 2, 4, 4, 11, 1, 8, 1, 5, 4};
    int a2[] = {11,22,33,44,55,66,77};

    printf("sum of myarray1 is: %d \n", sumofArray(myarray1, 10));
    printf("Average of myarray1 is: %d \n", AveragefArray(myarray1, 10));
    printf("sum of a2: %d \n", sumofArray(a2, 7));
    printf("Average of a2: %d \n", AveragefArray(a2, 7));

    return 0;
}