#include <stdio.h>
#include <math.h>

int perf(int num);
int main(){

int num=6;
if (perf(num)) 
{
    printf("True");
}else
    printf("False");

return 0;
}

int perf(int num){
    int new=0;
    for (int i = 1; i < num; i++)
    {
       if (num%i==0)
       {
          new+=i;
       }
       
    }
    
    if (new ==num) return 1;
    return 0;
}