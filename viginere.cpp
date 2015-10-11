#include <stdio.h>
#include <string.h>


//metodo para cifrar a mensagem
void cifra(){
	FILE *fileChave;
	FILE *fileMensagem;
	int m = 0, c = 0, aux = 0;
	int countToKeyArray = 0;
	char mensagemArray[999];
	


	////////////////
	//  MENSAGEM  //
	////////////////
	fileMensagem = fopen("mensagem.txt", "r");

    //Conta os chars do ficheiro "mensagem.txt". Permite determinar quantos char são necessarios para a chave.
	while ((m = fgetc(fileMensagem)) != EOF) {
		printf("char: %c \n", m);           //mostra no ecra os char da mensagem (APAGAR ESTA LINHA)
		mensagemArray[countToKeyArray] = m; //copia para o array mensagem a mensagem vinda do ficheiro txt
        countToKeyArray++;                  //saber o tamanho maximo da mensagem. Vai contando o num de char
    }
    //printf ("\nNum char da mensagem: %d\n\n", countToKeyArray); //LINHA DE TESTE - APAGAR NO FINAL
    //printf("\n\nMENSAGEM: %s\n", mensagem); //LINHA DE TESTE - APAGAR NO FINAL
	fclose(fileMensagem);


	/////////////
	//  CHAVE  //
	/////////////
	fileChave = fopen("chave.txt", "r");
	//char chaveArray[countToKeyArray]; //cria o array de char com o tamanho da mensagem para poder cifrar
	char chaveArray[999];

	printf("\n"); //APAGAR
	//copiar do ficheiro cahev.txt para o array chave
	while( (c = fgetc(fileChave)) != EOF ){
		printf("char: %c \n", c);      //mostra no ecra os char da mensagem (APAGAR ESTA LINHA)
		chaveArray[aux] = c;
		aux++;
	}
	fclose(fileChave);

	for(int i = 0; i < )






	//TESTES
	printf ("\nNum char da mensagem: %d", countToKeyArray); //LINHA DE TESTE - APAGAR NO FINAL
	printf ("\n   Num char da chave: %d\n\n", aux); //LINHA DE TESTE - APAGAR NO FINAL
    printf("\n\nMENSAGEM: %s", mensagemArray); //LINHA DE TESTE - APAGAR NO FINAL
    printf("\n   CHAVE: %s\n", chaveArray); //LINHA DE TESTE - APAGAR NO FINAL

}

void decifra(){
	//
}

int main(int argc, char* argv[]){
	
	char input[2];

	if( (strcmp(argv[1],"c") == 0) || (strcmp(argv[1],"C") == 0) ){
		printf("\nDentro da CIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
		cifra();
	}

	if( (strcmp(argv[1],"d") == 0) || (strcmp(argv[1],"D") == 0) ){
		printf("\n\nDentro da DECIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
		decifra();
	}

	return 0;
}
