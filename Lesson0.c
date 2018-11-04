//Dynamic Memory allocation
//This lesson is made assuming you are familiar with pointers
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,n=5,i;//n- length of array
    p=(int*)malloc(sizeof(int)*n);
/*        Understand what the above statement does     */
    for(i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    float *q,n1;//n1- length of array
    q=(float*)calloc(n1,sizeof(float));
/*       Understand what the above statement does    */
    free(q);
/*       Understand what the above statement does    */
    int ans=test1(10);
    if(ans==88)
    {
        printf("Test1 passed\n");
    }
    else{
        printf("Test1 failed\n");
    }

    return 0;
}

int test1(int number)
{
    /*
     Fill this function which returns sum of first 10 fibo number starting from 0,1(so return 0,1,1,2,3,5,8,13,21,34,...... till 10 terms)
     allocate memory using  dynamically
        */

}
