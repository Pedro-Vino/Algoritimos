#include <stdio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	printf("Olá, Mundo!");

	int x = 70;
	int y = 3;
	
	if(x > 5 && x < 20){
		printf("\nO valor de x está entre os valores 5 e 20.");
	}
	
	if(x > 0 && y > 0){
		printf("\nAmbos são positivos");
	} else {
		printf("\nPelo menos um não é positivo");
	}
	
	x = 10;
	
	x += 5;  // x = x + 5  -> x = 15
	x *= 2;  // x = x * 2  -> x = 30
	x -= 10; // x = x - 10 -> x = 20
	
	printf("\nValor final de x: %d\n", x);
	
	return 0;
}
