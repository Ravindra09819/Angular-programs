#include<stdio.h>
int main()
{
    char Arr[8]="ravindra";
    char *ptr=Arr;
    while(*ptr!='\0')
    {
        
        printf("%c\n",*ptr);
        ptr++;
        
    }
    return 0;

   
}