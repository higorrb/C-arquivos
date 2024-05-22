#include <stdio.h>

int main(){

    FILE *arquivo = fopen("tabuada.txt", "w");
    if (arquivo == NULL)
    {
        printf("erro ao abrir o arquivo...");
        return 1;
    }
    
    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            fprintf(arquivo,"%d x %d = %d\n", i, j ,i*j);
        }
        fprintf(arquivo,"\n");
    }
    fclose(arquivo);

    printf("checar arquivo criado.");

    return 0;
}