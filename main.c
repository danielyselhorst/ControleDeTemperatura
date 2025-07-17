#include <stdio.h>

int minimo;
int temperatura[10];
int maximo;
int Temperaturafaixa;
   
int main(){
    printf("\n------------Temperaturas------------\n");
    printf("\nDigite a temperaturas maxima: ");
    scanf("%d", &maximo);
    printf("\nDigite a temperaturas minima: ");
    scanf("%d", &minimo);

    while(minimo > maximo){
        printf("\nDigite a temperaturas maxima novamente: ");
        scanf("%d", &maximo);
        printf("\nDigite a temperaturas minima novamente: ");
        scanf("%d", &minimo);
    }

    for(int i = 0; i < 10; i++){
        printf("\nDigite a temperatura do dia %d: ", i+1);
        scanf("%d", &temperatura[i]);
    }
    printf("\n------Temperaturas dentro da faixa------- \n");

    for (int i = 0; i < 10; i++) {
        if (temperatura[i] >= minimo && temperatura[i] <= maximo) {
        printf("\nValor dentro da faixa: %d\n", temperatura[i]);
        Temperaturafaixa++;
}

    }
    printf("\n------Temperaturas dentro dos criterios------- \n");
    printf("\nQuantidade de temperaturas dentro da faixa: %d", Temperaturafaixa);

}
