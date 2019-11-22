#include <stdio.h>
int main()
{
    char foh [50];
    int i=1;
    while ((foh == getchar())!='\n')
    {
        if(foh==' ')
        ++i;
        if(foh=='0'//foh=='1'//foh=='2'//foh=='3'//foh=='4'//foh=='5')
        --i;
        if(foh=='6'//foh=='7'//foh=='8'//foh=='9')
        --i;
    }
    printf("%s",foh);
    printf("the number of words is :%d");
    return 0;
}