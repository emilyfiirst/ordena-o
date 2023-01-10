#include <stdio.h>

void selectionSort(int *V, int n){
    int i, j, menor, troca;
    for(i = 0; i < n-1; i++){
        menor = i;

        for(j = i+1; j<n; j++) //procura o menor elemento em relação a "i"
            if(V[j] < V[menor]){
                menor = j;
            }
        if(i != menor){ //troca os valores da posição atual com a "menor"
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }

    }
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

    selectionSort(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}