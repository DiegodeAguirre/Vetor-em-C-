#include<stdio.h>
#include<stdlib.h>


int main(){

    int i;
    float vetvendas[10], vetporc[10], vetsalario[10];
    char vetnome[10];
    float totalvendas;
    char nomemaior, nomemenor;
    float vendasmaior, vendasmenor;

    for(i=1; i<=10; i++)
    {
        printf("Digite o nome do vendedor: ");
        gets(vetnome[i]);
        printf("Digite valor das Vendas: ");
        scanf("%f", &vetvendas[i]);
        printf("Digite o percentual sobre as vendas:");
        leia(vetporc[i]);
        vetsalario[i] = (vetvendas[i] * vetporc[i]) /100);

    }
    vendasmenor = vetsalario[1];
    nomemenor = vetnome[1];
    for(i=1; i<=10; i++)
    {
      printf("O Funcionario:%c, %f, %f, %f", vetnome[i]vendeu R$ ",vetvendas[i],", com percentual de vendas de ",vetporc[i]," faturando R$ ",vetsalario[i]);
      totalvendas = totalvendas + vetvendas[i];
      if((vetsalario[i]) > vendasmaior)
      {
          vendasmaior = (vetsalario[i]);
          nomemaior = (vetnome[i]);
      }
     if((vetsalario[i])<(vendasmenor))
     {
         vendasmenor = (vetsalario[i]);
         nomemenor = (vetnome[i]);
     }

    printf("O total de vendas de todos funcionários é ", totalvendas);
    printf("O total de vendas de todos funcionários é ", totalvendas);
    printg("o funcionário ",nomemenor," teve a menor renda faturando R$ ",vendasmenor);

    }

    system("PAUSE");
    return 0;
}
