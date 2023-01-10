#include <stdio.h>


void bubbleSort(int *V, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i< fim-1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
}

int main(){

    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Informe os elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    
    return 0;
}