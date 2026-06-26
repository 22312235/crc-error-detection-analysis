#include <stdio.h>

int main()
{
    int ones=0;

    char data[]="10110011";

    for(int i=0;data[i];i++)
        if(data[i]=='1')
            ones++;

    if(ones%2==0)
        printf("Even Parity\n");
    else
        printf("Odd Parity\n");

    return 0;
}
