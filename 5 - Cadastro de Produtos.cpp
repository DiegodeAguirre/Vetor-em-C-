#include <stdio.h>
#include <stdlib.h>
int codp[3],prod[3],codc[3],i,j,qs,cod,opcao,opc;

int menu (void){                    /* menu */
        printf("\n\t\t <*> MENU <*>");         
        printf("\n\t 1- cadastro de produtos");
        printf("\n\t 2- pedido do cliente");                 
        printf("\n\t 3- estoque");
        printf("\n\t 4- sair");      
        scanf("%d",&opc);
        system("cls");
        return(opc);
      }
int cad(){                      /* fun��o cadastro*/  
    for(i=1;i<=3;i++){     
     printf("\n\t\t <*> CADASTRO DE PROODUTOS <*>");                      
     printf("\n digite o codigo do produto");
     scanf("%d",&codp[i]);
     printf("digite a quntidade do produto");
     scanf("%d",&prod[i]);
     system("cls");
    }      
  }
  int ped(){                 /*fun��o pedido cliente */
    for(i=1;i<=1;i++){
       printf("\n\t\t <> PEDIDO DO CLIENTE <>");                      
       printf("\n\t digite o codigo do cliente");
       scanf("%d",&codc[i]);
       printf("\ndigite o codigo do produto pedido");
       scanf("%d",&cod);
     }  
        for(i=1;i<=3;i++){           
         if(cod==codp[i]){
           printf("\t <*> codigo cadastrado !!!");
           printf("\n digite  quantidade solicitada");
           scanf("%d",&qs);                      
            if (qs<=prod[i]){
               prod[i]=prod[i]-qs;
               printf("pedido atendido");               
              }
           }              
         else{
          printf("\n N�o temos estoque suficiente desta mercadoria");
          } 
         system("cls");                   
       
   }       
}  
int estoque (){
       printf("::CODIGO::  :: QUANTIDADE::");   
       for(i=1;i<=3;i++){                            
         printf("\n %d-  %d",codp[i],prod[i]);       
       }     
     
}
int main(void){    
       opcao=menu(); 
       while(opcao!=4){
        if (opc==1){
           cad();
           opcao=menu();
           }
         else    
         if (opc==2){
           ped();
           opcao=menu();
           }
         else          
         if (opc==3){                       
           estoque();
           opcao=menu();              
          } 
         if (opc==4){
           printf("programa encerrado");
           }
    }              
   system("pause");
   return(0);   
}
