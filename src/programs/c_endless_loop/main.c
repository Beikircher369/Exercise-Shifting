#include <stdio.h>

int main(int argc, char **argv)
{
    int array[7] = {9, 5, 2, 56, 3, 9, 7};
    int count_position = 0;
    int b = 0;
    int temporär = 0;
    while (b != 10)
    {
        if (array[count_position] <= array[6])
        {
            if (array[count_position] > array[count_position + 1])
            {
               
                temporär = array[count_position + 1];
                array[count_position + 1] = array[count_position];
                array[count_position] = temporär;
              
            }
        
        }
        else
        {
            array[count_position] = 0;

            if (array[count_position] > array[count_position + 1])
            {
                
                temporär = array[count_position + 1];
                array[count_position + 1] = array[count_position];
                array[count_position] = temporär;
        
                
        }

        count_position++;
        
    }
    b++;
}
    for (int count = 0; count <= 6; count++)
    {
        printf("%d\n", array[count]);
    }
}