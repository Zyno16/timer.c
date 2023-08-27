#include <stdio.h>
#include <stdlib.h>

int main()
{    unsigned int my_time;
my_time=time(0)+1;
    while(time(0)< my_time);
    printf("1\n");
    my_time=time(0)+1;
    while(time(0)< my_time+1);
    printf("2\n");
    my_time=time(0)+1;
    while(time(0)< my_time+1);
    printf("3\n");
    my_time=time(0)+1;
    while(time(0)< my_time+1);
    printf("4\n");
    my_time=time(0)+1;
    while(time(0)< my_time+1);
    printf("5\n");
    my_time=time(0)+1;
    while(time(0)< my_time+1);
    printf("6\n");


    return 0;
}
