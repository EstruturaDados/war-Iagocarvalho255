#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TERRITORIOS 5

struct territorio{ //Criação da estrutura territorio
    char nome[50];
    char cor[10];
    int tropas;
};
 void limparbufferdeEntrada(){ // Função para limpar o buffer de entrada
    int c; // Variável para limpar o buffer de entrada
    while((c=getchar()) != '\n' && c !=EOF); // Limpa o buffer de entrada
 }
 int main(){
 struct territorio mapa[MAX_TERRITORIOS]; // Array de estruturas territorio
 int totaldeTerritorios= 0;
 int opcao;

  do{ // loop do-while para o menu
    printf("#############################\n");
    printf("===Jogo War- Menu Principal=== \n");
    printf("#############################\n");
    printf("1- Adicionar Territorio\n");
    printf("2- Listar Territorios\n");
    printf("0- Sair\n");
    printf("Escolha uma opção: ");

    scanf("%d", &opcao); // Lê a opção do usuário
    limparbufferdeEntrada();


    switch (opcao){ // Estrutura switch para as opções do menu
        case 1:
        printf("Adicionar território\n");
        if(totaldeTerritorios < MAX_TERRITORIOS){
            printf("Digite o nome do Território: ");
            fgets(mapa[totaldeTerritorios].nome, 50, stdin);
            mapa[totaldeTerritorios].nome[strcspn(mapa[totaldeTerritorios].nome, "\n")]; "\n";
            printf("Digite a cor do Território: ");
            fgets(mapa[totaldeTerritorios].cor,10,stdin);
            mapa[totaldeTerritorios].cor[strcspn(mapa[totaldeTerritorios].cor, "\n")];'\n';
            printf("Digite o numero de tropas: ");
            scanf("%d", &mapa[totaldeTerritorios].tropas);
            limparbufferdeEntrada();
            totaldeTerritorios++;
        }else{
            printf("Limite de territórios atingido!\n");}
            break;
        case 2:  // Listar territórios
        printf("Listar Territorios \n");
        for(int i=0; i<totaldeTerritorios;i++){ // Loop "for" para listar os territórios
            printf("Territorio %d: \n", i+1);
            printf("Nome: %s \n", mapa[i].nome);
            printf("Cor: %s \n", mapa[i].cor);
            printf("Tropas: %d \n", mapa[i].tropas);
            printf("-------------------\n");        
        }
        break;
        case 0:
        printf("Saindo do jogo War...\n");
        break;
        default:
        printf("Opção inválida! Tente novamente.\n");
        break;
        }
    }while(opcao !=0);  // Fim do loop do-while
      return 0;
  }

 
