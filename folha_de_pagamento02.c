	//VERSAO 2 DA ATIVIDADE
#include <stdio.h>

int main() {
    
    //Declaracao de variaveis
    float salario, inss, fgts, sistema_s, rat, total_encargos, ferias, adicional_ferias, decimo_terceiro, aviso_previo, total_direitos;
    float multa_fgts, inss_rescisao, total_demissao, reserva_total;

    // Entrada de dados do usuario
    printf("Digite o salario do empregado: ");
    scanf("%f", &salario);

    // Calcula encargos trabalhistas 
    inss = salario * 0.20;
    fgts = salario * 0.08; 
    sistema_s = salario * 0.058; 
    rat = salario * 0.02; 
    total_encargos = inss + fgts + sistema_s + rat;

    // Calcula reservas para direitos trabalhistas
    ferias = salario / 12;  
    adicional_ferias = (salario / 3) / 12; 
    decimo_terceiro = salario / 12;  
    aviso_previo = salario / 12;
    total_direitos = ferias + adicional_ferias + decimo_terceiro + aviso_previo;

    // Calcula reservas para demissão 
    multa_fgts = (fgts * 0.40) / 12;  
    inss_rescisao = (ferias + adicional_ferias) * 0.20; 
    total_demissao = multa_fgts + inss_rescisao;

    // Calcula o total a reservar por mês
    reserva_total = total_encargos + total_direitos + total_demissao;

    // Saida dos valores
    printf("\nResultados para salario de R$%.2f\n", salario);
    printf("\nEncargos Trabalhistas:\n");
    printf("INSS Patronal: R$%.2f\n", inss);
    printf("FGTS: R$%.2f\n", fgts);
    printf("Sistema S: R$%.2f\n", sistema_s);
    printf("RAT: R$%.2f\n", rat);
    printf("Total Encargos: R$%.2f\n", total_encargos);

    printf("\nReservas para Direitos:\n");
    printf("Ferias: R$%.2f\n", ferias);
    printf("Adicional de Ferias: R$%.2f\n", adicional_ferias);
    printf("13º Salario: R$%.2f\n", decimo_terceiro);
    printf("Aviso Previo: R$%.2f\n", aviso_previo);
    printf("Total Direitos: R$%.2f\n", total_direitos);

    printf("\nReservas para Demissao (guardar todo mes):\n");
    printf("Multa FGTS (40%%): R$%.2f\n", multa_fgts);
    printf("INSS sobre Rescisao: R$%.2f\n", inss_rescisao);
    printf("Total Demissao: R$%.2f\n", total_demissao);

    printf("\nTotal a Reservar por Mes: R$%.2f\n", reserva_total);

    // Mostra os impostos do comércio
    printf("\nImpostos do Setor do Comercio:\n");
    printf("ICMS: 17 a 19%% (pago por mes, depende do estado)\n");
    printf("PIS: 0,65%% ou 1,65%%\n");
    printf("COFINS: 3%% ou 7,6%%\n");
    printf("IRPJ: 15%% sobre lucro\n");
    printf("CSLL: 9%% sobre lucro\n");
    printf("ISS: 2 a 5%% (pago por mes, para servicos)\n");
    printf("Taxas Municipais: R$100 a R$1000 por ano\n");

    return 0;
}