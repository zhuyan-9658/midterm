#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i=1;int j=0;
    int m=0; 
    double a[100];
    for(i=1;i<argc;i++,j++){
    a[j]=atof(argv[i]);
    }
    double max=a[1];
    for(m=0;m<argc-2;m++){
        if(max<a[m+1]){
            max=a[m+1];
        }
    }
    printf("The max is %g\n",max);
    return 0;
}