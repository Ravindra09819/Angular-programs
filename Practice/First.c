#include<stdio.h>

void Display(int iNo1,int iNo2)

{
    int i,j;
    for(i=1;i<iNo1;i++)
{
    for(j=0;j<iNo2;j++)
    {
        if(i==j)
{
    printf("1\t");
}
    else
    {
        printf("0\t");
    }
   }
}    
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;

}