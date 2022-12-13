#include<stdio.h>
#include<stdlib.h>

int main(){
    int x[200] = {0};
    int y;
    //condição dos numeros digitados
    for (int i= 0; i <= 5000; i++){
        printf("Digite um numero: ");
        scanf("%d", &y);
        //se o numero digitado for igual a -1 o programa vai encerrar
        if(y == -1) break;

        x[y / 32] = x[y / 32] | (1 << (y % 32));
    }

    printf("\nOrdem crescente: ");
    //condição que esta ordenando em ordem crescente
    for (int i = 0; i <= 5000; i++){
        if((x[i / 32] >> i) & 1){
            printf("%d\n", i);
        }
    }

 return 0;
 }
