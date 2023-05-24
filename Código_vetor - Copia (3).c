#include <stdio.h>
#include <windows.h>

void imprCaracteres(int numeros[], char caracteres[], int tamanho)
 {
    for (int i = 0; i < tamanho; i++) 
	{
        for (int j = 0; j < numeros[i]; j++) 
		{
            printf("%c", caracteres[i]);
        }
        printf("\n");
    }
}

int main() 
{
    int tamanho;
    system("color 04");
    printf("\nInsira o tamanho dos vetores que deseja: ");
    printf("\n==> ");
    scanf("%d", &tamanho);
    system("cls");
    system("color 0D");
	printf("\n\n\t\t .  CARREGANDO .  ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . .  CARREGANDO . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . .  CARREGANDO . . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t . . . .  CAREGANDO . . . . ");
	Sleep(400); 
	system("cls");

    int numeros[tamanho]; 
    char caracteres[tamanho]; 

    for (int i = 0; i < tamanho; i++) 
	{
		system("color 09");
        printf("\nInsira o numero de VEZES que o caracter '%c' deve ser impresso: ", i + 'a');
        printf("\n==> ");
        scanf("%d", &numeros[i]);

        printf("\nInsira o CARACTER da posicao %d: ", i);
        printf("\n==> ");
        scanf(" %c", &caracteres[i]);
    }

    imprCaracteres(numeros, caracteres, tamanho);

    return 0;
}