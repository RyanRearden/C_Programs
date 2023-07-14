#include <stdio.h>

int main(){
    int a, b;

    //takes in 2 numbers
    scanf("%d %d", &a, &b);

    //if a > b print 1
    if( a> b){
        printf("1");
    }
    //if a <=b print 0
    else{
        printf("0");
    }
    return 0; 

}