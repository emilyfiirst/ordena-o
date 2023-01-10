#include <stdio.h>

void insertionSort(int *V, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--)
            V[j] = V[j - 1];
        V[j] = aux;
    }
}


int main (){

    int n;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Informe os elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    insertionSort(vetor, n);
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }


return 0;
}