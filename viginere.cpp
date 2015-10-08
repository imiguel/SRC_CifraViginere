#include <stdio.h>
#include <string.h>


//metodo para cifrar a mensagem
void cifra(){
	FILE *fileChave;
	FILE *fileMensagem;
	int c = 0;
	int count = 0;
	char chave[999];
	char mensagem[999];


	fileMensagem = fopen("mensagem.txt", "r");



    //copia o conteudo do ficheiro "mensagem.txt" para um array de char
    while ((c = fgetc(fileMensagem)) != EOF) {
	printf("char: %c \n", c); //mostra no ecra a mensagem
        count++; //saber o tamanho maximo da mensagem
    }
    printf ("\nNum char da mensagem: %d", count); //LINHA DE TESTE - APAGAR NO FINAL

    



	/*          FAZER
	1. ler o ficheiro letra a letra e guardar a letra num vecotr char
	2. ler o ficheiro mensagem.txt e guardar as letras num vector de char
	3. fazer a correspondencia letra chave vs letra da mensagem
	*/


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
