#include <stdio.h>
#include "header1.h"
#define PI 3.14
#define X PI
//#define X SIFRE*var
#undef PI
#define PI 456
int main(){
    printf("%d\n",PI);
printf("%d",X);
    return 0;
}