#include <stdio.h>
#include <math.h>
int palind(int num);
   
int main(){
    int x;
   if ( palind(121))
   {
       printf("is polind.");

   }else printf("is not polind.");
   
    return 0;
}
int palind(int num){
int new =0;
int tmp=num;
   while (num > 0)
   {
     new =(new *10)+(num%10);
      num/=10;
   }
   if (new == tmp) return 1; 
    return 0;
}
