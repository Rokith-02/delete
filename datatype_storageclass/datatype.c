#include<stdio.h>
int main()
{
        printf("Datatype:char                 size:%ld  range:                     -128 to 127\n",sizeof(char));
        printf("Datatype:unsigned char        size:%ld  range:                        0 to 255\n",sizeof(char));
        printf("Datatype:int                  size:%ld  range:              -2147483648 to 2147483647 \n",sizeof(int));
        printf("Datatype:unsigned int         size:%ld  range:                        0 to 4294967295 \n",sizeof(int));
        printf("Datatype:short int            size:%ld  range:                   -32768 to 32767 \n",sizeof(short int));
        printf("Datatype:unsigned short int   size:%ld  range:                        0 to 65535 \n",sizeof(short int));
        printf("Datatype:long int             size:%ld  range:     -9223372036854775808 to 9223372036854775807\n",sizeof(long int));
        printf("Datatype:unsigned long int    size:%ld  range:                        0 to 18446744073709551615 \n",sizeof(long int));
        printf("Datatype:float                size:%ld  range:         1.175494351 E-38 to 3.402823499 E+38\n",sizeof(float));
        printf("Datatype:double               size:%ld  range: 2.2250738585072014 E-308 to 1.7976931348623158 E+308\n",sizeof(double));
}
