#include <stdio.h>
#include <string.h>
//strcmp é um comparador de strings. strcmp(exemploVariavel,"string")==0
int main(){
	char player1[256],player2[256];
	char novamente[256];
		printf("			Pedra, papel e tesoura.\n\nJogo para 2 players.");
		do{
		printf("\n\n\nPlayer 1, sua vez de jogar...");
		scanf("%s",&player1);
		printf("\n\n\nPlayer 2, sua vez de jogar...");
		scanf("%s",&player2);
		if(strcmp(player1,"pedra")==0 ){
			if(strcmp(player2,"pedra")==0){
					printf("\n\n			EMPATE!!\n\nOs dois jogaram pedra.");
				}else if(strcmp(player2,"papel")==0){
					printf("\n\n		Player 2 venceu!\n\nPlayer 1 jogou pedra.\nPlayer 2  jogou papel\n");
				}else if(strcmp(player2,"tesoura")==0){
					printf("\n\n		Player 1 venceu!\n\nPlayer 1 jogou pedra.\nPlayer 2 jogou tesoura\n");
				}else printf("\n\n		O Player 2  digitou %s.\n	So e permitido digitar pedra, papel e tesoura.\n",player2);
		}
			if(strcmp(player1,"papel")==0){
				if(strcmp(player2,"pedra")==0){
					printf("\n\n		Player 1 venceu!\n\nPlayer 1 jogou papel.\nPlayer 2 jogou pedra.\n");
				}else if(strcmp(player2,"papel")==0){
					printf("\n\n		EMPATE!!\n\nOs dois jogaram papel");
				}else if(strcmp(player2,"tesoura")==0){
					printf("\n\n		Player 2 venceu!\n\nPlayer 1 jogou papel.\nPlayer 2 jogou tesoura.\n");
				}else printf("\n\n		O Player 2  digitou %s.\n	So e permitido digitar pedra, papel e tesoura.\n",player2);
		}
			if(strcmp(player1,"tesoura")==0){
				if(strcmp(player2,"pedra")==0){
					printf("\n\n		Player 2 venceu!\n\nPlayer 1 jogou tesoura.\nPlayer 2 jogou pedra.\n");
				}else if(strcmp(player2,"papel")==0){
					printf("\n\n		Player 1 venceu!\n\nPlayer 1 jogou tesoura.\nPlayer 2 jogou papel.\n");
				}else if(strcmp(player2,"tesoura")==0){
					printf("\n\n		EMPATE!!\n\nOs dois jogaram tesoura.");
				}else printf("\n\n		O Player 2  digitou %s.\n	So e permitido digitar pedra, papel e tesoura.\n",player2);
			}else printf("\n\n		O Player 1 digitou %s.\n	So e permitido digitar pedra, papel e tesoura.\n",player1);
			printf("\n\n\n\nDeseja jogar novamente?");
			scanf("%s",&novamente);
    	}while(strcmp(novamente,"sim")==0);


	
}
