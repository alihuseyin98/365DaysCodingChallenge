#include <stdio.h>
#include <math.h>

int frind(int num1,int num2);
int main(){

int num1=220;
int num2=284;
if (frind(num1,num2)) 
{
    printf("True yawall");
}else
    printf("False");

return 0;
}

int frind(int num1,int num2){
    int new1=0;
    int new2=0;
    for (int i = 1; i < num1; i++)
    {
       if (num1%i==0)
       {
          new1+=i;
       }
       
    }
     for (int i = 1; i < num2; i++)
    {
       if (num2%i==0)
       {
          new2+=i;
       }
       
    }
    
    if (new1 ==num2 && new2==num1) return 1;
    return 0;
}