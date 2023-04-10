#include<stdio.h>
void print(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void bubble(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int i,j,temp;
    int a[5]={10,24,34,14,39};
    int n=sizeof(a)/sizeof a[0];
    printf("before sorting array elements are:\n");

    print(a,n);
    bubble(a,n);
    printf("\n after sorting array element\n");
    print(a,n);
    return 0;
}