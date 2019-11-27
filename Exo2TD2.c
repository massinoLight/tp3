#include<stdio.h>
#include<stdlib.h>


int main(){
unsigned short tab[3]={100,200,300};
unsigned short *v;
v=tab;
printf("%d \n",*(v+1));
*(v+1)=500;

printf("\n");

for(int i=0;i<3;i++){
printf("TAB[%d]=%d \n",i,tab[i]);
}
return 0;

}
