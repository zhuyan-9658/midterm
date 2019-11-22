#include <stdio.h>

int main()
{ 
    unsigned   int x = 1;
    int  a =1 ;
    while (x>0){
    x=x<<1;++a;
    }
    unsigned  int max_int=0-1;   
    printf("The max value of int on a machine:%d\n",max_int);
    printf  ("%d\n",a)  ;
}