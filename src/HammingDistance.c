#include <stdio.h>

int main()
{
    char a[]="110101";
    char b[]="100111";

    int distance=0;

    for(int i=0;a[i];i++)
        if(a[i]!=b[i])
            distance++;

    printf("Hamming Distance = %d",distance);

    return 0;
}
