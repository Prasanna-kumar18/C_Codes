#include <stdio.h>
#include <stdint.h>

#pragma pack(1)

struct datarecord
{
    char a;
    int b;
    char c;
    short d;
};

int main()
{
    struct datarecord data;

    data.a = 0X21;
    data.b = 0XFFFF1167;
    data.c = 0X12;
    data.d = 0XABCD;

    uint8_t *ptr;

    ptr = (uint8_t*)&data;

    uint32_t datasize = sizeof(struct datarecord);

    for (uint32_t i=0; i<datasize;i++)
    {
        printf("The value %d of datarecord is %2p\n",i,*ptr);
        ptr++;
    }
    printf("The size is %d",datasize);
}
