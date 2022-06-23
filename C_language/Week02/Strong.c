#include <stdio.h>
#include <math.h>
//– 145 = 1! + 4! + 5! = 145 güçlü sayıdır.
int strong(int num);
int fact(int num);
int res(int num);
int main(){

int num=143;

if (strong(num)) 
{
    printf("True");
}
else 
    printf("False");

return 0;
}


int strong(int num){

    int new=0;
    int tmp=num;
 
    while (num>0)
    {
 int fact=1;
for (int i =num%10  ; i > 0; i--)
{
   fact*=i;
}
        new +=fact;//(num%10);
        fact=1;
        num/=10; 
    }if 
    (new ==tmp) 
    return 1;

    return 0;
}