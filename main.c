#include <stdio.h>

int main()
{
	int cha;

	printf("Digite um numero inteiro: ");
	scanf("%i", &cha);

	if(cha < 0) {
		cha = -cha;
	}
	printf("Valor de cha: %i\n", cha);

	if(cha >= 32 && cha <= 126) {
		printf("\nValor imprimivel da tabela ASCII");
		printf("\nValor em decimal: %d", cha);
		printf("\nValor em octal: %o", cha);
		printf("\nValor em hex: %x", cha);
		printf("\nValor em caractere: %c", cha);
	}

	if(cha < 32) {
		cha = 32;
		printf("\nValor em decimal: %d", cha);
		printf("\nValor em octal: %o", cha);
		printf("\nValor em hex: %x", cha);
		printf("\nValor em caractere: %c", cha);
	}

	if(cha > 127) {
		cha = cha % 128;
		printf("\nValor em decimal: %d", cha);
		printf("\nValor em octal: %o", cha);
		printf("\nValor em hex: %x", cha);
		printf("\nValor em caractere: %c", cha);
	}


	return 0;
}
