#include <stdio.h>
#include <stdlib.h>

int main() {
	int tamanho=10;
    int *vector = (int*) malloc(tamanho*sizeof(int));
    if (vector == NULL){
    	printf("erro. sem memoria.");
    	exit(1);
	}
    for (int i = 0; i < 10; i++) {
        vector[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    free(vector);
    return 0;
}
