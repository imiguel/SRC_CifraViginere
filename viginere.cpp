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



<<<<<<< HEAD
    /*Conta os chars do ficheiro "mensagem.txt". Permite determinar quantos char são necessarios para a chave.
    */
	while ((c = fgetc(fileMensagem)) != EOF) {
		printf("char: %c \n", c); //mostra no ecra os char da mensagem (APAGAR ESTA LINHA)
		mensagem[countToKeyArray] = c; //copia para o array mensagem a mensagem vinda do ficheiro txt
        countToKeyArray++; //saber o tamanho maximo da mensagem. Vai contando o num de char
=======
    //copia o conteudo do ficheiro "mensagem.txt" para um array de char
    while ((c = fgetc(fileMensagem)) != EOF) {
	printf("char: %c \n", c); //mostra no ecra a mensagem
        count++; //saber o tamanho maximo da mensagem
>>>>>>> origin/master
    }
    char chave[countToKeyArray]; //cria o array de char com o tamanho da mensagem para poder cifrar
    printf ("\nNum char da mensagem: %d\n\n", countToKeyArray); //LINHA DE TESTE - APAGAR NO FINAL
    printf("\n\nMENSAGEM: %s\n", mensagem); //LINHA DE TESTE - APAGAR NO FINAL





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
		decifra();
	}

	return 0;
}
