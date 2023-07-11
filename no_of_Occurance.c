//Find the number of occurance in array

#include <stdio.h>
#include <stdlib.h>

int to_find(int array[], int len, int find_num)
{
    int count = 0;
    

    for (int i = 0; i < len; i++)
    {
        if (array[i] == find_num)
        {
            count++;
        }
        
    }
      return count;
}

int main()
{
    int myarray1[] = {4, 2, 4, 4, 11, 1, 8, 1, 5, 4};

    int count1 = to_find(myarray1, 10, 1);
    
    printf("From my array count of 4 is: %d",count1);
    
    return 0;

}
