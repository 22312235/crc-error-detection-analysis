#include <stdio.h>

int main()
{
    unsigned short data[]={
        0x1234,
        0x5678,
        0x9ABC,
        0xDEF0
    };

    unsigned int sum=0;

    for(int i=0;i<4;i++)
        sum+=data[i];

    while(sum>>16)
        sum=(sum&0xFFFF)+(sum>>16);

    unsigned short checksum=~sum;

    printf("Checksum = 0x%X\n",checksum);

    return 0;
}
