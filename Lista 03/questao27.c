#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int i, j, h, hip;

    for (i = 1; i < 500; i++) {
        hip = pow(i, 2);
        for ( j = 1; j < 500; j++) {
            for (h = 1; h < 500; h++) {
                if(hip == (pow(j, 2) + pow(h, 2))){
                    printf("%d \t %d \t %d \n", hip, j, h);
                }
            }
            
        }
    }

    return 0;
}