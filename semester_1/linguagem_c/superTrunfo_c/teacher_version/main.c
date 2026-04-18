#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Siga os comentários para implementar cada parte do desafio.

//TODO: Corrigir bug na impressão do resultado
//TODO: Documentar

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado_1, estado_2, codCarta_1[3], codCarta_2[3], nomeCidade_1[20], nomeCidade_2[20], resultado[20];
	int pontosTuristicos_1, pontosTuristicos_2;
	unsigned int long populacao_1, populacao_2;
	float area_1, area_2, pib_1, pib_2, densidade_popolacional_1, densidade_popolacional_2, pib_per_capta_1, pib_per_capta_2;
	int num_carta_1 = 1, num_carta_2 = 2;


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    

    printf("============= Super Trunfo =============\n"); //Mensagem inicial
	
		// ========================= CARTA 1 ================================
	printf("Insira os dados da carta 1\n");	//Pedir dados da carta 1
	
	printf("Digite a letra do estado (de A à H)\n"); //Pedir e armazenar Letra do estado
	scanf(" %c", &estado_1);
	
	//Array de char que gera o cod do estado
	codCarta_1[0] = estado_1;
	codCarta_1[1] = num_carta_1 + '0';
	codCarta_1[2] = '\0'; // para indicar o final e não acumular lixo de memória no array de char

  while(getchar() != '\n'); // Limpar o buffer do teclado para evitar problemas com o fgets
	
	printf("Digite o nome da cidade:\n"); //Usando o fgets para capturar o nome
	fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
	
	printf("Digite a população da cidade:\n"); //Pede a população
	scanf("%d", &populacao_1);
	
	printf("Digite a área² da cidade:\n"); //Pede a área
	scanf("%f", &area_1);
	
	printf("Digite o PIB da cidade:\n"); // Pede o PIB
	scanf("%f", &pib_1);
	
	printf("Digite o número de pontos turísticos da cidade:\n"); //Pede num pontos turísticos
	scanf("%d", &pontosTuristicos_1);
	
	densidade_popolacional_1 = populacao_1 / area_1;
	pib_per_capta_1 = pib_1 / populacao_1;

	long double super_poder_1 = (long double)populacao_1 + area_1 + pib_1 + pontosTuristicos_1 + pib_per_capta_1 + (1/densidade_popolacional_1);

	// ========================= CARTA 2 ================================
	printf("Insira os dados da carta 2\n");	//Pedir dados da carta 2
	
	printf("Digite a letra do estado (de A à H)\n"); //Pedir e armazenar Letra do estado
	scanf(" %c", &estado_2);
	
  while(getchar() != '\n'); // Limpar o buffer do teclado para evitar problemas com o fgets

	//Array de char que gera o cod do estado
	codCarta_2[0] = estado_2;
	codCarta_2[1] = num_carta_2 + '0';
	codCarta_2[2] = '\0';
	
	printf("Digite o nome da cidade:\n"); //Usando o fgets para capturar o nome
	fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
	
	printf("Digite a população da cidade:\n"); //Pede a população
	scanf("%d", &populacao_2);
	
	printf("Digite a área² da cidade:\n"); //Pede a área
	scanf("%f", &area_2);
	
	printf("Digite o PIB da cidade:\n"); // Pede o PIB
	scanf("%f", &pib_2);
	
	printf("Digite o número de pontos turísticos da cidade:\n"); //Pede num pontos turísticos
	scanf("%d", &pontosTuristicos_2);

	densidade_popolacional_2 = populacao_2 / area_2;
	pib_per_capta_2 = pib_2 / populacao_2;
	
	long double super_poder_2 = (long double)populacao_2 + area_2 + pib_2 + pontosTuristicos_2 + pib_per_capta_2 + (1/densidade_popolacional_2);
	
    // Comparação de Cartas: (Atributo: Área):
    

    if (area_1 > area_2) {
        sprintf(resultado, "Resultado: Carta %d (%s) venceu!", num_carta_1, nomeCidade_1);
    } else {
        sprintf(resultado, "Resultado: Carta %d (%s) venceu!", num_carta_2, nomeCidade_2);
    }

    

    // Exibição dos Resultados:
    printf("Comparação de Cartas: Atributo: 'Área'\n");
    printf("Carta %d - %s: %.2f\n", num_carta_1, nomeCidade_1, area_1);
    printf("Carta %d - %s: %.2f\n",  num_carta_2, nomeCidade_2, area_2);
    printf("===== Vencedor =====\n");
    printf("%s\n", resultado);
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
