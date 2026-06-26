#include <stdio.h>

int main()
{
    char data[]="110101";

    printf("Polynomial:\n");

    int power=5;

    for(int i=0;i<6;i++)
    {
        if(data[i]=='1')
            printf("x^%d ",power);

        power--;
    }

    return 0;
}
