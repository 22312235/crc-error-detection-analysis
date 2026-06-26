#include <stdio.h>

int main()
{
    char data[]="11111100001111";

    data[5]='0';
    data[6]='1';
    data[7]='1';
    data[8]='1';

    printf("%s",data);

    return 0;
}
