#include <stdio.h>

int main()
{
    char a[]="1011";
    char b[]="1101";

    printf("Result: ");

    for(int i=0;i<4;i++)
        printf("%d",a[i]!=b[i]);

    return 0;
}
