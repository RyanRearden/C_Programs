#include <stdio.h> 

int main(){
    
    float base, height; 

    //takes two floats from the user
    scanf("%f %f", &base, &height);

    //Area of triangle = 0.5*base*height 
    float area = 0.5 * (base * height); 

    //prints the area as a float
    printf("%f", area);
    
    return 0; 
}

