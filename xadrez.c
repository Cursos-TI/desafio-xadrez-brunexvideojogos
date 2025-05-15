#include <stdio.h>


int main() {
	//VARIAVEIS
	 int i;
	 
	 //PRINTF PARA SEPARAR A PEÇA DOS MOVIMENTOS
	 printf(" \n");
	 printf("TORRE\n");
	 printf(" \n");
	 
	 //USO DA REPETIÇÃO "FOR" PARA MOVER A TORRE
	for (int i = 0; i < 5; i++) {
		printf("Direita\n");
	}
	
	//PRINTF PARA SEPARAR A PEÇA DOS MOVIMENTOS
	printf(" \n");
	printf("BISPO\n");
	printf(" \n");

	//USO DA REPETIÇÃO "WHILE" PARA MOVER O BISPO
	while (i <= 4){
	printf("Cima\n");
	printf("Direita\n");
	i++;
	} 
	
	//PRINTF PARA SEPARAR A PEÇA DOS MOVIMENTOS
	printf(" \n");
	printf("RAINHA\n");
	printf(" \n");
	
	//USO DA REPETIÇÃO "DO-WHILE" PARA MOVER A RAINHA
	do{
		printf("Esquerda\n");
		i++;
	}while (i <= 12);
	
	return 0;
}
