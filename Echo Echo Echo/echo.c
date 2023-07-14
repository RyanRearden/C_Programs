#include <stdio.h> 


int main () {
    //delcares the variable "word" as a char array of 30
    char word[30];

    //user input 
    scanf("%s", word);

    //prints the variable word 3 times
    for(int i = 0; i<3; ++i){
    printf("%s ", word);
    }
    return 0;

}

