#include <stdio.h>

int main() {
    int num;

    //takes an int
    scanf("%d", &num);

    //for that many times it prints the number of times it has
    //repeated plus the word
    for(int i = 1; i <= num; i++){
        printf("%d Abracadabra\n", i); 
    }
    return 0;
}