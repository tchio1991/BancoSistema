//Simulação de app de banco

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int bancoAgen = 2222, bancoC = 33333;
	int agencia, ContaC, entrar, sair, opcao;
	float ContaCorrent = 5500, ContaPoupanca = 3500, sacar; 
	
	//Comando para aceitar acenctuação da lingua portuguesa
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nBem vindo ao Bradesco!! O banco que sempre ajuda na sua vida financeira!!\n");

	printf("\nAperte um numero de 0 a 5 para entrar: \n");
	scanf("%d", &entrar);
	
	switch(entrar) {
	    case 0:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
        case 1:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
	    case 2:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
        case 3:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
        case 4:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
        case 5:
		printf("\nSeja bem vindo ao seu ambiente conta bradesco\n");
	    printf("\nInsira a sua Agência: \n");
	    scanf("%d", &agencia);
        printf("\nInsira a sua Conta: \n");
        scanf("%d", &ContaC);
        break;
        default:
        	printf("\nOpção invalida!!\n");
        break;
	}
        
	if (agencia != bancoAgen && ContaC != bancoC) {
		printf("\nAgencia e numero da conta incoretos!!\n");
	} else {
		printf("\nSeja bem vindo Thiago Cardoso!\n");
		printf("\nA sua agencia é: %d\n", agencia);
		printf("\nA sua agencia é: %d\n", ContaC);
		printf("\nA sua conta corrente: R$ %.2f\n", ContaCorrent);
		printf("\nA sua conta poupança: R$ %.2f\n", ContaPoupanca);
	} 
	
	printf("\nVocê quer sacar da conta poupança ou corrente? opação de sacar da poupança digite 1 opção de sacar da conta corrente digite 2\n");
	scanf("%d", &opcao);
	
	if (opcao == 1) {
		printf("\nDigite quanto você quer sacar da conta poupança: R$ \n");
        scanf("%f", &sacar);
        printf("\nA sua conta poupança depois do saque: R$ %.2f \n",ContaPoupanca-sacar);
	}
	    if (opcao == 2) {
		printf("\nDigite quanto você quer sacar da conta corrente: R$ \n");
        scanf("%f", &sacar);
        printf("\nA sua conta corrente depois do saque: R$ %.2f \n",ContaCorrent-sacar);
	}
	
	printf("\nDigite algum numero para sair do programa: \n");
	scanf("%d",&sair);

}
