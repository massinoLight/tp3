#include<stdio.h>
#include<stdlib.h>

double calculeMoyenneTableau(int *tab,int n){

int i=0;
double moyenne=0;
 for( i; i<=n ; i++)
    {
        moyenne=moyenne+tab[i];
        nb=i;
    }

   moyenne=moyenne/i;
return moyenne;
}


int main(){
int tableau[6]={1,2,3,4,5,6};
double moy=calculeMoyenneTableau(tableau,5);

printf("%f \n",moy);
return 0;

}



/*int M[4][2] = {{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                {10,11,12,13,14,15,16,17,18,19},
                {20,21,22,23,24,25,26,27,28,29},
                {30,31,32,33,34,35,36,37,38,39}};
int *p;
p = (int *)M;*/
