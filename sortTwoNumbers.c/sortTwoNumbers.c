#include <stdio.h>

int main(){
    int a, b;

    // takes two ints
    scanf("%d %d", &a, &b);

    //if a is less than b print a b
    if(a < b){
        printf("%d %d", a ,b);
    }
    // if a >= b print b a
    else{
        printf("%d %d", b, a);
    }
    return 0; 
}