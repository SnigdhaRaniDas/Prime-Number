#include<stdio.h>
int main() {
    int num, i, count = 0;
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("it's a prime number.");
    } else {
        printf("it's not a prime number.");
    }
    return 0;
}