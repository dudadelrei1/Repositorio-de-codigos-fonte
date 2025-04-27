#include <stdio.h>

int main(){
  
    int nasc, ano, aniv;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nasc);
    
    printf("Digite o ano desejado como referência: ");
    scanf("%d", &ano);
    
    printf("Já fez aniversário no ano desejado? Digite 1 para sim ou 2 para não: ");
    scanf("%d", &aniv);
    
    int idd = 0;
    
    if(aniv == 1){
        idd = ano - nasc;
        printf("\nSua idade, no ano e na condição de aniversário indicada, é %d.", idd);
    }
    
    else if(aniv == 2){
        idd = ano - nasc - 1;
        printf("\nSua idade, no ano e na condição de aniversário indicada, é %d.", idd);
    }
    
    else{
        printf("\nErro. Comece novamente.");
        
    }
    
    return 0;
    
}