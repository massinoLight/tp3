#include<stdio.h>
#include<stdlib.h>


void supp(char motif, char source[] )
{
int i,j;
char ntab;

for(i=0;source[i]!='\0';i++){
  if(source[i]==motif)
{
   for(j=i;source[i]!='\0';j++)
     { 
   source[j]= source[j+1];
 }

  }

}

for(i=0;source[i]!='\0';i++)
{
printf("%c",source[i]);

}
}

int main(){
char tab[5]={'d','e','a','b','a'};
char motif='a';
int i;
for(i=0;tab[i]!='\0';i++)
{
printf("%c",tab[i]);

}
supp(motif,tab);
return 0;

}
