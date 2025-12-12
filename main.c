#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE *sheet = fopen("chemical_db.csv", "r");

    char *read_data = malloc(sizeof(char));
    fgets(read_data, 100, sheet);
    printf("%s", read_data);

    free(read_data);
    fclose(sheet);
    return 0;
}