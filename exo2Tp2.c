#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
unsigned short tab[3]={100,200,300};
unsigned short *v;
v=tab;
printf("%d\n",*(v+1));
    *(v+1)=500;           
}


