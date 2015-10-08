#include <stdio.h>
#include <string.h>


//metodo para cifrar a mensagem
void cifra(){
	FILE *fileChave;
	FILE *fileMensagem;
	int c = 0, i = 0, j = 0;
	char chave[999];
	char mensagem[999];

	fileChave = fopen("chave.txt", "r");
	fileMensagem = fopen("mensagem.txt", "r");

	//copia o conteudo do ficheiro "chave.txt" para um array de char
	while ((c = fgetc(fileChave)) != EOF) {
		printf("char: %c \n", c); //mostra no ecra a chave
        chave[i] = c;
    }

    //copia o conteudo do ficheiro "mensagem.txt" para um array de char
	while ((c = fgetc(fileMensagem)) != EOF) {
		printf("char: %c \n", c); //mostra no ecra a mensagem
        mensagem[j] = c;
    }

    



	/*          FAZER
	1. ler o ficheiro letra a letra e guardar a letra num vecotr char
	2. ler o ficheiro mensagem.txt e guardar as letras num vector de char
	3. fazer a correspondencia letra chave vs letra da mensagem
	*/

	fclose(fileChave);
	fclose(fileMensagem);
}

int main(int argc, char* argv[]){
	
	char input[2];

	if( (strcmp(argv[1],"c") == 0) || (strcmp(argv[1],"C") == 0) ){
		printf("\n\nDentro da CIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
		cifra();
		printf("\n");
	}

	if( (strcmp(argv[1],"d") == 0) || (strcmp(argv[1],"D") == 0) ){
		printf("\n\nDentro da DECIFRA\n"); //APAGAR ESTA LINHA NO ANTES DE ENTREGAR
	}

	return 0;
}