#include <stdio.h>
#include <math.h>
#include "header1.h"

//int mul(int x,int y);
int sum(int x,int y);


int main(){
printf("SUB %d\n",sub(5,2));
printf("MUL %d\n",mul(5,2));

///printf( "%.1f", sqrt( 900.0 ) ); 

printf( "%.3f\n", 3.451256 ); 
int summ=sum(5,7);
printf("%d\n",summ);

return 0;
}

//---------------
/*
int mul(int x,int y){
    return x*y*y;
}
*/

int sum(int x,int y){
    return (x+y);
}
int sub(int x ,int y){
    printf("hello ya başa ");
    return x-y;
}