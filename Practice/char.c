#include<stdio.h>
int main()
{

    int r,c;
    for(r=1;r<=26;r++)

    {
        for(c=1;c<=1;c++)
        {
            printf("%c  %c %c\n",r+96,r+64,r+99);
             //printf("%c",r+64);
        }
        printf("\n");
    }
    return 0;
}