#include <stdio.h>

// O Bubble sort, passa diversas vezes ao longo do vetor e vai "empurrando" o maior valor encontrado 
// para a direita.   for(temp1 = 0; temp1<tam_vetor;temp1++){printf("%i , ", vet[temp1]);} printf("\n"); 

void bubble_sort (int *vet, int tam_vetor)
{
    int i, j, temp, temp1;
    for(j = 0; j<tam_vetor;j++){  
        for(i = 0; i<tam_vetor-1-j;i++){   
            if(vet[i]>vet[i+1]){
            printf(" \n %i e maior que %i, sera efeituada troca:  \n", vet[i], vet[i+1]);
            for(temp1 = 0; temp1<tam_vetor;temp1++){printf("%i , ", vet[temp1]);}printf("\n"); 
            temp = vet[i+1];
            vet[i+1] = vet[i];
            vet[i] = temp;
            for(temp1 = 0; temp1<tam_vetor;temp1++){printf("%i , ", vet[temp1]);}printf("\n"); 
            }else{ printf("\n %i nao e maior que %i, continua igual\n", vet[i], vet[i+1]);
                for(temp1 = 0; temp1<tam_vetor;temp1++){printf("%i , ", vet[temp1]);}printf("\n");
            }}}            
}

int main()
{   
    int tamanho_vetor = 6;
    int vetor[] = { 0, 2, 1 , 5, 4 ,3};
    int i;
    printf("\n VETOR DESORDENADO!\n");
    for(i=0;i<tamanho_vetor;i++)
    {
        printf("%i ,", vetor[i]);
    }
    printf("\n");
    bubble_sort(vetor, tamanho_vetor);
    printf("\n");
    printf("\n VETOR ORDENADO!\n");
    for(i=0;i<tamanho_vetor;i++)
    {
        printf("%i ," , vetor[i]);
    }
    return 0;
}
