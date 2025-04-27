#include <stdio.h>

int main(){

    /* Declaração de variáveis */
    int dia, mes, ano, dia_nasc, mes_nasc, ano_nasc;

    /* Entrada da data de nascimento do usuário */
    printf("Vamos começar com a sua data de nascimento\n");
    printf("Digite o dia: ");
    scanf("%d", &dia_nasc);
    printf("Digite o mês: ");
    scanf("%d", &mes_nasc);
    printf("Digite seu ano: ");
    scanf("%d", &ano_nasc);
    printf("Data do seu nascimento: %d/%d/%d\n", dia_nasc, mes_nasc, ano_nasc);
  
    /* Entrada da data atual */ 
    printf("Agora a data atual\n");
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Data de hoje: %d/%d/%d\n", dia, mes, ano);

    /* Variável para armazenar a idade do usuário */
    int idade;
  
    /* Verifica se a data é inválida */
    if ( (ano < ano_nasc) || (ano == ano_nasc && mes < mes_nasc) || (ano == ano_nasc && mes == mes_nasc && dia < dia_nasc) ){
        printf("Essa data é inválida\nTente Novamente\n");
    }
    /* Verifica a idade quando o ano atual é maior que o ano de nascimento */
    else if ( ano > ano_nasc ){
        if ( mes < mes_nasc ){
            idade = ano - ano_nasc - 1;
            printf("Você tem %d anos\n", idade);
        }
        else if ( mes > mes_nasc ){
            idade = ano - ano_nasc;
            printf("Você tem %d anos\n", idade);

        }
        else if ( mes == mes_nasc ){
            if ( dia < dia_nasc ){
                idade = ano - ano_nasc - 1;
                printf("Você tem %d anos\n", idade);
            }
            else if ( dia == dia_nasc ){
                idade = ano - ano_nasc;
                if ( idade == 1 ){
                    printf("Hoje é seu aniversário!\nVocê está completando %d ano\n", idade);
                }
                else {
                    printf("Hoje é seu aniversário!\nVocê está completando %d anos\n", idade);
                }
            }
            else{
                idade = ano - ano_nasc;
                printf("Você tem %d anos\n", idade);
            }
        }
    }
    /* Verifica a idade quando o ano atual é igual ao ano de nascimento */
    else if ( ano == ano_nasc ){
        if ( mes > mes_nasc ){
            idade = mes - mes_nasc;
            if ( idade == 1){
                printf("Você tem %d mês\n", idade);
            }
            else {
                printf("Você tem %d meses\n", idade);
            }
        }
        else if ( mes == mes_nasc ){
            if ( dia > dia_nasc ){
                idade = dia - dia_nasc;
                if ( idade == 1 ){
                    printf("Você tem %d dia\n", idade);
                }
                else {
                    printf("Você tem %d dias\n", idade);
                }
            }
            else if ( dia == dia_nasc ){
                printf("Você nasceu hoje!\n");
            }
        }
    }
    
    return 0;

}
