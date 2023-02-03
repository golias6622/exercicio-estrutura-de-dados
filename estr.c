#include <stdio.h>
#include <stdlib.h>

int main() {
	int tamanho=10;
    int *vet = (int*) malloc(tamanho*sizeof(int));
    if (vet == NULL){
    	printf("erro. sem memoria.");
    	exit(1);
	}
    for (int i = 0; i < 10; i++) {
        vet[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    free(vet);
    return 0;
}
