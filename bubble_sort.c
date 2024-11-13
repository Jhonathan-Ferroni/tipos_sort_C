#include <stdio.h>

// O Bubble sort, passa diversas vezes ao longo do vetor e vai "empurrando" o maior valor encontrado 
// para a direita.

//O código na realidade precisa de muito menos linhas para funcionar, porem adicionei diversos
//printf para exibir na tela exatamente como o bubble funciona

void bubble_sort (int *vet, int tam_vetor)
{
    int i, j, temp, temp1;
    
    //Aqui vemos a estrutura padrão de todo bubble sort "for, for, if"
    
    //Onde o primeiro for serve para percorrer o vetor diversas vezes
    for(j = 0; j<tam_vetor;j++){
        /*já o segundo for serve para percorrer os indices do vetor em si, porem a cada percorrida
          um trecho menor do indice é percorrido */
        for(i = 0; i<tam_vetor-1-j;i++){
          /* a condição if é utilizada para verificar se o valor armazenado no
            indice atual é maior que o seguinte
            caso a condição seja verdadeira, seus valores sao invertidos */
            if(vet[i]>vet[i+1]){
                printf(" \n %i e maior que %i, sera efetuada troca:  \n", vet[i], vet[i+1]);
                
                //exibe o vetor inteiro
                for(temp1 = 0; temp1<tam_vetor;temp1++) {
                    printf("%i , ", vet[temp1]);}
                printf("\n"); 
                
                //as trocas de valores são feitas nas 3 seguintes linhas
                temp = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = temp;
                
                //exibe o vetor inteiro
                for(temp1 = 0; temp1<tam_vetor;temp1++){
                    printf("%i , ", vet[temp1]);}
                printf("\n"); 
            }
            //caso não tenha sido feita a troca exibe a mensagem a seguir
            else{ printf("\n %i nao e maior que %i, troca nao efetuada\n", vet[i], vet[i+1]);
               
               //exibe o vetor inteiro
                for(temp1 = 0; temp1<tam_vetor;temp1++){
                    printf("%i , ", vet[temp1]);}
                printf("\n");
            }}}            
}

int main()
{   
    int tamanho_vetor = 6;
    int vetor[] = { 0, 2, 1 , 5, 4 ,3};
    int i;
    
    //exibe o vetor inteiro
    printf("\n VETOR DESORDENADO!\n");
    for(i=0;i<tamanho_vetor;i++)
    {
        printf("%i ,", vetor[i]);
    }
    printf("\n");
    bubble_sort(vetor, tamanho_vetor);
    printf("\n");
    //exibe o vetor inteiro
    printf("\n VETOR ORDENADO!\n");
    for(i=0;i<tamanho_vetor;i++)
    {
        printf("%i ," , vetor[i]);
    }
    return 0;
}
