#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fct (char t[],int nb){
int i;
for(i=0;i<nb;i++){
printf("%c",t[i]);
printf("\n");
}
}


         void fct1 (char *t,int nb){
         int i;
            for(i=0;i<nb;i++){
             printf("%c",t[i]);
             printf("\n");
               }
             }
int main()
{
char T[20];
char T2[]="abcdefg";
char *TP;
TP=&T[0];
T[0]='1';T[1]='2';T[2]='3';T[3]='4';T[4]='5';
fct(T,3);
fct1(TP,3);
fct(T2,5);
TP=&T2[3];
fct(TP,3);
fct1(TP,3);
T[3]='0';
fct(T,5);
scanf("%s",T);
printf("%s\n",T);
printf("%c\n",T[4]);
               
}


