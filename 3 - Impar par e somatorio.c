#include <stdio.h>


int main (int argc, char **argv)

    int Numero[10], i, impar, somatorio;
    printf ("Entre com um numero: ");
    for (i=0;i<10;i++) {
    scanf ("%d", &Numero[i]);
    }
    somatorio = 0;
    impar = 0;
    for (i=0;i<10;i++) {
    //Se for par
    if (Numero[i] % 2 == 0) {
    somatorio += Numero[i];
    } else {
    //Se for �mpar
    impar++;
    }
    }
    printf("A soma dos pares �: %d e o n�mero de �mpares �: %d\n", somatorio, impar);
    return 0;
    }
