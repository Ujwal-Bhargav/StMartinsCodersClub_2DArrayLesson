/*
Dynamically allocating memory for 2D Array
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **array,i,row_size=3,column_size=3;
    array=(int**)malloc(sizeof(int*)*row_size);// for each row (starting pointer of a row)
    for(i=0;i<r;i++)
    {
        array[i]=(int*)malloc(sizeof(int)*column_size);
    }
    return 0;
}

/*
    Debug and move step wise and clearly understand the concept

*/
