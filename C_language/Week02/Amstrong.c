#include <stdio.h>
#include <math.h>

int amst(int num);
int main(){
printf("%f",fabs(-12.5));
int num=301;
/* if (amst(num)) 
{
    printf("True");
}else printf("False");
 */
return 0;
}
int amst(int num){
    int new=0;
    int tmp=num;
    while (num>0)
    {
        new +=pow(num%10,3);
        num/=10; 
    }if (new ==tmp) return 1;
    return 0;
}