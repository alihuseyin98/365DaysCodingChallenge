#include <stdio.h>
#include "header1.h"
#define plus(x) (x+1)
#define buyuk(x,y) (x>y ? "x bigger":"y bigger") ///"%d bigger",x:"y bigger",y

int main()
{
    printf("%d\n",10>12 ? 10:12);
printf("%s\n",buyuk(10,6));
printf("%d\n",pow(5));
printf("%d\n",plus(5));
    return 0;
}