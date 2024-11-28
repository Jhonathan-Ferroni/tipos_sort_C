#include <stdio.h>

#define TAM 7


//o insertion sort é otimo para casos onde o vetor está "quase ordenado"
//atingindo O(n²) apenas quando o vetor está completamente desordenado

void insertion_sort(int *vet, int tamvet)
{
    int anterior, i, k, atual;
    //percorre o vetor iniciando no 2º elemento
    for(i=1; i<tamvet;i++)
    {
        atual = vet[i];
        anterior = i-1;
        
        printf("corrigindo posição do %i\n", vet[i]);
        
        while ( (anterior >= 0 ) && (vet[anterior] > atual) )
        {
            
            for (k = 0; k < TAM; k++) {
            printf("%d ", vet[k]); }
            printf("\n");
            vet[anterior+1] = vet[anterior];
            anterior--;
        }
        vet[anterior+1] = atual;
        
        for (k = 0; k < TAM; k++) {
        printf("%d ", vet[k]);  }
        
         printf("\n");
    }
        
        
}

int main()
{
    //declaração do vetor
    int vetor[TAM] = {6, 3, 2 , 1, 5 , 4 , 0};
    int i;

    // Exibe o vetor inicial
    printf("\nVETOR DESORDENADO:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    //chamada da função de ordenação
    insertion_sort(vetor,TAM);
    printf("\nVETOR ORDENADO:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
