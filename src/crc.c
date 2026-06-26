#include <stdio.h>
#include <string.h>

void xorOperation(char *data, char *generator, int pos)
{
    for(int i=0;i<strlen(generator);i++)
    {
        data[pos+i]=(data[pos+i]==generator[i])?'0':'1';
    }
}

int main()
{
    char data[50]="11010110110000";
    char generator[]="10011";

    int len=strlen(data);
    int gen=strlen(generator);

    for(int i=0;i<=len-gen;i++)
    {
        if(data[i]=='1')
            xorOperation(data,generator,i);
    }

    printf("CRC Remainder: ");

    for(int i=len-gen+1;i<len;i++)
        printf("%c",data[i]);

    return 0;
}
