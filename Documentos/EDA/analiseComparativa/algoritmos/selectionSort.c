/*

melhor caso O(N²)
pior caso O(N²)

estavel: nao altera a ordem de chaves iguais

*/

int smallerIndex(int vet[], int tam, int ini){
    int min = ini, j;
    for(j = ini + 1; j < tam; j++){
        if(vet[min] > vet[j])
            min = j;
    }
    return min;
}

void seletionSort(int vet[], int tam){
    int i, min, aux;
    for(i = 0; i < tam; i++){
        //acha a posicao de menor elemento a partir de i
        min = smallerIndex(vet, tam, i);
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }
}