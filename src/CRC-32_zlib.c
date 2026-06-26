#include <stdio.h>
#include <string.h>
#include <zlib.h>

int main()
{
    char text[]="Computer Networks";

    unsigned long crc=crc32(0L,Z_NULL,0);
    crc=crc32(crc,(Bytef*)text,strlen(text));

    printf("CRC32 = %lu\n",crc);

    return 0;
}
