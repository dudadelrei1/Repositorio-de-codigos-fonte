#include <stdio.h>

int main(){
    
    float base, alimentacao, opcao, bruto, transporte, inss, irpf, passagem, valet, baseIR, liquido;
    
    printf("Digite aqui o seu salário base: R$");
    scanf("%f", &base);
    
    if(base < 1518){
        printf("Seu saláro não pode ser menor que R$1518.00");
    }
    
    else{
        
        printf("Digite aqui o valor do Auxílio-Alimentação: R$");
        scanf("%f", &alimentacao);
    
        printf("Deseja receber Vale-Transporte? Digite 1 para sim ou 2 para não: ");
        scanf("%f", &opcao);
    
        if(opcao == 1){
            
            printf("\nDigite o valor da passagem unitária: R$");
            scanf("%f", &passagem);
            
            valet = passagem * 2 * 26; //2 referente à ida e à volta e 26 referente aos dias de trabalho no mês
            transporte = base * 0.06;
            
        }
        
        else if(opcao == 2){
            valet = 0;
            transporte = 0;
        }
       
        else{
           printf("\nResposta não reconhecida pelo programa.\nComece novamente.");
           return 0;
        }       
        
        //Cálculo do desconto do INSS:
        
        if(base == 1518){
            inss = base * 0.075;
        }
        
        else if(base > 1518 && base <= 2793.88){
            inss = (1518 * 0.075) + ((base - 1518) * 0.09);
        }
    
        else if(base > 2793.88 && base <= 4190.83){
            inss = (1518 * 0.075) + ((2793.88 - 1518) * 0.09) + ((base - 2793.88) * 0.12);
        }
            
        else if(base > 4190.83 && base <= 8157.41){
            inss = (1518 * 0.075) + ((2793.88 - 1518) * 0.09) + ((4190.83 - 2793.88) * 0.12) + ((base - 4190.83) * 0.14);
        }
        
        else{
            inss = 951.63;
        }
        
        //Cáuculo do desconto do IRPF:
        
        baseIR = base - inss;
        
        if(baseIR <= 2259.2){
            irpf = 0;
        }
        
        else if(baseIR > 2259.2 && baseIR <= 2826.65){
            irpf = baseIR * 0.075;
        }
    
        else if(baseIR > 2826.65 && baseIR <= 3751.06){
            irpf = (2259.2 * 0.075) + ((baseIR - 2826.65) * 0.15);
        }
            
        else if(baseIR > 3751.06 && baseIR <= 4664.68){
            irpf = (2259.2 * 0.075) + ((3751.06 - 2826.65) * 0.15) + ((baseIR - 3751.06) * 0.225);
        }
        
        else{
            irpf = (2259.2 * 0.075) + ((3751.06 - 2826.65) * 0.15) + ((4664.68 - 3751.06) * 0.225) + ((baseIR - 4664.68) * 0.275);
        }
        
        liquido = base - transporte - inss - irpf;
        
        printf("\n\nSeu salário bruto é R$%3.2f", base);
        printf("\nA ser descontado:");
        printf("\n\tVale-Transporte: R$%3.2f", transporte);
        printf("\n\tINSS: R$%3.2f", inss);
        printf("\n\tIRPF: R$%3.2f", irpf);
        printf("\nSeu salário líquido é R$%3.2f", liquido);
        printf("\nBenefícios:");
        printf("\n\tAuxílio-Alimentação: R$%3.2f", alimentacao);
        printf("\n\tVale-Transporte: R$%3.2f", valet);
    }

    return 0;
    
}