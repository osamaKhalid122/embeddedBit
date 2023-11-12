//Write a code that prints the number of zeros
//between two ones and ooesn't count the zeroes
//which don't terminate with one.

#include "stdio.h"

void countOne(int * bin2, int size)
{
    int flag = 0;
    int count = 0;
    for (int i = 0; i < (size/4); i++)
    {
        if(bin2[i] == 1)
        {
            flag = 1;
        }
        if (flag == 1)
        {
            if(bin2[i] == 0)
            {
                count++;
            }
            else
            {
                if(count != 0)
                    printf("Count is %d\n\r", count);
                count = 0;
            }
        }
    }
}


int main()
{
    int bin[8] = {1,0,1,0,1,0,0,0};
    int bin2[8] = {0,1,0,0,1,0,0,0};
    countOne(bin2, sizeof(bin));
    countOne(bin, sizeof(bin));
}