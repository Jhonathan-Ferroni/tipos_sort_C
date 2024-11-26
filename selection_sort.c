#include <stdio.h>

#define TAM 7

void selection_sort(int *vet, int tam_vet)
{
    int indicemenor, aux, i, j, k;
    
    //percorre o vetor
    for(i=0;i< tam_vet-1;i++)
    {
        indicemenor=i; //inicia o menor valor na posição atual
        
        //procura o menor valor do vetor nas posições seguintes
        for(j=i+1;j<tam_vet;j++){
            if(vet[j]<vet[indicemenor]){  //se encontrar um valor menor do que o atual
                indicemenor=j;    //armazena o valor encontrado no menor indice
            }
        }
        //realiza troca se o elemento atual não for o menor valor
        if(indicemenor!=i){
            printf("\nVetor atual: ");
            for (k = 0; k < TAM; k++) {
                printf("%d ", vet[k]);
                }
                printf("\n");
            aux = vet[i];
            vet[i] = vet[indicemenor];
            vet[indicemenor] = aux;
            printf("Vetor após troca: ");
            for (k = 0; k < TAM; k++) {
                printf("%d ", vet[k]);
            }
            printf("\n");
        }else {
            printf("\n");
            printf("Nenhuma troca necessária nesta iteração.\n");
            
    }
    }
}

int main()
{
    int vetor[TAM] = {6, 3, 2 , 1, 5 , 4 , 0};
    int i;

    // Exibe o vetor inicial
    printf("\nVETOR DESORDENADO:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    selection_sort(vetor,TAM);
    printf("\nVETOR ORDENADO:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
