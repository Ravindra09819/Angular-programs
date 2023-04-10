#include<stdio.h>


int Summation(int arr[])
{
    int sum=0,i;
    for(i=0;i<3;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

void main()
{
    int arr[3]={9,8,5};
    int s=Summation(arr);
    printf("%d",s);
}