#include<stdio.h>
#include<stdlib.h>

int main(){

    int vet[50], num[50], pos[50];
    int cont, i,cont_p;

    cont = 1;
    scanf("%d", & num[i]);
    if(num[i] >= 0){
        for(i=1; i<=50; i++)
        {
            pos[cont_p] = num [i];
            cont_p = cont_p + 1;

        }
        if(cont_p =1)
        {
            printf("Vetor de positivo vazio");

        }
        else{
            for(i=1; i<=cont_p; i--){
                printf("Numeros Positivos:%d", pos[i]);

            }

        }
    }
    system("PAUSE");
    return 0;
}
