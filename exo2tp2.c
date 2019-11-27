#include<stdio.h>
#include<stdlib.h>
#include<math.h>




void puissance(int x,int  n,int *res){

//printf("%d",puis);
*res=pow(x,n);	

}


int main(){
int a=0;
int n=0;
int puiss=0;
printf("donner votre entier\n");
scanf("%d",&a);
printf("donner votre puissance\n");
scanf("%d",&n);

puissance(a,n,&puiss);

printf("%d^%d=%d \n",a,n,puiss);

return 0;

}


