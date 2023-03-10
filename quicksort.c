#include <stdio.h>

int particiona(int *V, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    
    while (esq < dir){
        while (esq <= final && V[esq] <= pivo)
            esq++;
        while(dir >= 0 && V[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

int main(){
    int n, inicio = 0;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Informe os elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    quickSort(vetor, inicio, n);

    for(int i = 0; i < n; i++){
        printf("\n\n%d\n", vetor[i]);
    }

    return 0;
}