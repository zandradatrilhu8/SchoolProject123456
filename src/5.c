#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 10;
    printf("Generated number: %d\n", num);
    return 0;
}
