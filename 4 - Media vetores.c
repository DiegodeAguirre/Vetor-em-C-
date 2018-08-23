#include<stdio.h>
#include<stdlib.h>


int main(){


    int i, contmedia;
    char vetnome[5];
    float vetpreco[5];
    float contvendas;

    for(i=1; i<=5; i++)
    {
    printf("Digite o nome do produto: ");
    gets(vetnome[i]);
    printf("Digite o preço do produto: ");
    scanf("%f", &vetpreco[i]);
    if(vetpreco[i] < 50.00)
    {
        contvendas = contvendas + 1;

    }

    }
    for(i=1; i<=5; i++){
        if((vetpreco[i] >= 50)||(vetpreco[i]<=100)){
            printf("Este produto tem preço entre R$ 50,00 e R$100,00:%f", vetnome[i]);

        }
        if(vetpreco[i] > 100){
            contmedia = contmedia + 1;
            media = (media+vetpreco[i]);



        }
        if(contmedia = 0){
            contmedia = 1;


        }
        media = (media / contmedia);
        printf("A quantidade de produto inferior a R$ 50,00 é:%f", contvendas);
        printf("A media dos preços superior a R$ 100,00 é:%f", media);

    system("PAUSE");
    return 0;






}
