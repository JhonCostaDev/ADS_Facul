#include <stdio.h>
#define MAX_CARTAS 10
//Super Trunfo
int menu();	//prototype

// Molde para as cartas
typedef struct {
	char estado; 			//Armazena um caractere do Estado
	char cidade[20];		//Armazena o nome da cidade
	char codCarta;			//Armazena o cod da carta composto do numero mais a letra
	int populacao;			//Número de habitantes da cidade
	int pontosTuristicos;	// Número de pontos turísticos da cidade
	float area;				//Área em m² da cidade
	float pib;				// Valor do pib em R$ da cidade
} Carta;

int main(void){
	//Declaração das variáveis
	Carta baralho[MAX_CARTAS];
	
	int opcao;
	

	opcao = menu();
	printf("A opção escolhida foi %d\n", opcao);

	return 0;
}


int menu() {
	int opcao;
	printf("========== Super Trunfo Cidades ==========\n");
	printf("Digite (1) Para ver as cartas cadastradas\n"
		"Digite (2) para cadastrar uma nova carta\n" 
		"Digite (3) para jogar\n"
		"Digite (0) para encerrar o jogo!\n");
	printf("==========================================\n");
	scanf("%d", &opcao);

	return opcao;

}

void cadastrarNovaCarta(void) {
	printf("========== Cadastrar Nova Carta ==========");
}