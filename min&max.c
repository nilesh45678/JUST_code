//Find the maximum value from the array

#include <stdio.h>
#include <stdlib.h>

int find_max(int array[], int length)
{
    int max = array[0];

    for (int i = 1; i < length; i++)
    {
        if(array[i] >= max)
        {
            max = array[i] ; 
        }
    }
    return max;
}

int find_min(int array[], int length)
{
    int min;
    min = array[0];
    
    for (int i = 0; i < length ; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
        }
    }
 
     return min;
}

int main()
{
    int myarray1[] = {4, 2, 9, 15, 11, 14, 8, 1, 5};

    int max = find_max(myarray1, 9);
    int min = find_min(myarray1, 9);
    printf("max %d \n", max);
    printf("min %d", min);

    return 0;
}

