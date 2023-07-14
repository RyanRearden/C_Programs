#include <stdio.h>

int main() {
    int stones; 

    //takes an int
    scanf("%d", &stones); 

    //if the number of stones is even print Bob
    if(stones % 2 == 0) {
        printf("Bob");
    }
    //else (odd) print Alice
    else {
        printf("Alice");
    }

    return 0; 
}