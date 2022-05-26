#include<stdio.h>
void main()
{
    char a;
    while(1)
    {
        printf("\nEnter any key: ");
        a=getchar();
        if(a=='\n')
        {
        printf("\nEnter key is pressed: ");
        break;
        }
        else
        printf("\nThe value of a is: %c",a);
        fflush(stdin);
    }
}