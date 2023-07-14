#include <stdio.h>

int main(){
    int r1, s;

    //scans for 2 ints
    scanf("%d %d", &r1, &s);

    //equation to find r2
    int r2 = (s*2)-(r1);

    //print r2
    printf("%d", r2);
}