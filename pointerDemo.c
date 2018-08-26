#include "pointerDemo.h"

void pointerDemo(void)
{
    int i = 0;
    int p;
    p = (int)&i;
    printf("0x%x\n", p); 
    printf("%p\n", &i);  
    printf("%lu\n", sizeof(int)); //32λϵͳΪ4  64λϵͳΪ4
    printf("%lu\n", sizeof(&i));//32λϵͳΪ4  64λϵͳΪ8 
}
