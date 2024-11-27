//Biblioteca

#include <stdio.h>

//Definindo o tamanho do vetor
#define TAM 7

//função da ordenação
void selection_sort(int *vet, int tam_vet)
{
    //declarando as variaveis, indice menor armazenara a posição do menor valor não ordenado
    //aux servira para fazer as trocas de posição.
    //i, j e k são variaveis para os loops
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
            //a troca acontece nessas 3 linhas abaixo
            aux = vet[i];
            vet[i] = vet[indicemenor];
            vet[indicemenor] = aux;
            
            printf("Vetor após troca: ");
            for (k = 0; k < TAM; k++) {
                printf("%d ", vet[k]);
            }
            printf("\n");
        }else {
            //caso não seja feita nenhuma troca exibe essa mensagem
            printf("\n");
            printf("Nenhuma troca necessária nesta iteração.\n");
            
    }
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
    selection_sort(vetor,TAM);
    printf("\nVETOR ORDENADO:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
