#include <stdio.h>

int main() {
	// Declaração das variáveis

	char estado1[1], estado2[1]; // Declaração das variáveis dos estados para as 2 cartas
	char codigo1[4], codigo2[4]; // Declaração das variáveis dos códigos para as 2 cartas
	char cidade1[21], cidade2[21]; // Declaração das variáveis das cidades para as 2 cartas
	int populacao1, populacao2;	// Declaração das variáveis das populações para as 2 cartas
	float area1, area2; // Declaração das variáveis das áreas para as 2 cartas
	float pib1, pib2; // Declaração das variáveis dos PIBs para as 2 cartas
	int pontos1, pontos2; // Declaração das variáveis dos pontos para as 2 cartas

	printf("JOGO - SUPER TRUNFO\n");
	printf("Assim que solicitado informe os dados de cada carta\n\n");

	// Solicitação dos dados da carta 1
	printf("Digite o estado da carta 1: "); 
	scanf("%s", &estado1, 1); 
	printf("Digite o código do estado da carta 1:");
	scanf("%s", &codigo1, 4);
	printf("Digite a cidade da carta 1: ");
	scanf("%s", &cidade1, 21);
	printf("Digite a população da carta 1: ");
	scanf("%d", &populacao1);
	printf("Digite a área da carta 1: ");
	scanf("%f", &area1);
	printf("Digite o PIB da carta 1: ");
	scanf("%f", &pib1);
	printf("Digite os pontos turísticos da carta 1: ");
	scanf("%d", &pontos1);
	printf("DADOS DA CAARTA 1 CAASTRADOS COM SUCESSO!\n\n");

	// Solicitação dos dados da carta 2
	printf("Digite o estado da carta 2: ");
	scanf("%s", &estado2, 1);
	printf("Digite o código do estado da carta 2:");
	scanf("%s", &codigo2, 4);
	printf("Digite a cidade da carta 2: ");
	scanf("%s", &cidade2, 21);
	printf("Digite a população da carta 2: ");
	scanf("%d", &populacao2);
	printf("Digite a área da carta 2: ");
	scanf("%f", &area2);
	printf("Digite o PIB da carta 2: ");
	scanf("%f", &pib2);
	printf("Digite os pontos turísticos da carta 2: ");
	scanf("%d", &pontos2);
	printf("DADOS DA CARTA 2 CADASTRADOS COM SUCESSO!\n\n");

	//Imprime os dados das cartas 1 e 2
	printf("DADOS DA CARTA 1\n");
	printf("Estado: %s\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f\n", area1);
	printf("PIB: %.2f\n", pib1);
	printf("Pontos turísticos: %d\n\n", pontos1);

	printf("DADOS DA CARTA 2\n");
	printf("Estado: %s\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f\n", area2);
	printf("PIB: %.2f\n", pib2);
	printf("Pontos turísticos: %d\n\n", pontos2);

}