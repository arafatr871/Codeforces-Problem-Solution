#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);


    int horseshoes[4] = {a, b, c, d};
    int unique_count = 0;

    for (int i = 0; i < 4; i++) {
        int is_unique = 1; 
        for (int j = 0; j < i; j++) {
            if (horseshoes[i] == horseshoes[j]) {
                is_unique = 0; 
                break;
            }
        }
        if (is_unique) {
            unique_count++;
        }
    }


    int needed_horseshoes = 4 - unique_count;
    printf("%d\n", needed_horseshoes);

    return 0;
}
