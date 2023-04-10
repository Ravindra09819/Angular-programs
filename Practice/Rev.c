#include<stdio.h>
int main()
{
    char str[1000],rev[1000];
    int i,j,count=0;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("\n string before  reverse : %s",str);
    while(str[count]!=0)
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        rev[i]=str[j];
        j--;
    }
    printf("\n String after reverse : %s \n",rev);  
}