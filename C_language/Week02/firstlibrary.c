extern  int palindl(int num){
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

 extern  int amstl(int num){
    int new=0;
    int tmp=num;  
    while (num>0)
    {
        new +=pow(num%10,3);
        num/=10; 
    }if (new ==tmp) return 1;
    return 0;
}

int strongl(int num){

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

int perfl(int num){
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
int frindl(int num1,int num2){
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