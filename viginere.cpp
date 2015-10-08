#include <stdio.h>
#include <string.h>


//metodo para cifrar a mensagem
void cifra(){
	FILE *fileChave;
	FILE *fileMensagem;
	int c = 0;
	int countToKeyArray = 0;
	char mensagem[999];


	fileMensagem = fopen("mensagem.txt", "r");



    /*Conta os chars do ficheiro "mensagem.txt". Permite determinar quantos char são necessarios para a chave.
    */
	while ((c = fgetc(fileMensagem)) != EOF) {
		printf("char: %c \n", c); //mostra no ecra os char da mensagem (APAGAR ESTA LINHA)
        countToKeyArray++; //saber o tamanho maximo da mensagem. Vai contando o num de char
    }
    printf ("\nNum char da mensagem: %d\n\n", countToKeyArray); //LINHA DE TESTE - APAGAR NO FINAL
    char chave[countToKeyArray]; //cria o array de char com o tamanho da mensagem para poder cifrar
    



	/*          FAZER
	1. ler o ficheiro letra a letra e guardar a letra num vector char
	2. ler o ficheiro mensagem.txt e guardar as letras num vector de char
	3. fazer a correspondencia letra chave vs letra da mensagem
	*/


	fclose(fileMensagem);
}

void decifra(){
	//
}

int main(int argc, char* argv[]){
	
	char input[2];

	if( (strcmp(argv[1],"c") == 0) || (strcmp(argv[1],"C") == 0) ){
		printf("\n\nDentro da CIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
		cifra();
	}

	if( (strcmp(argv[1],"d") == 0) || (strcmp(argv[1],"D") == 0) ){
		printf("\n\nDentro da DECIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
	}

	return 0;
}