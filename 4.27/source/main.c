#include <stdio.h>

int main() {
    int side1, side2, hypotenuse,a=1;

    // Triple-nested for loop to find Pythagorean triples
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {  // Ensure side2 >= side1 to avoid duplicate triples
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {  // Ensure hypotenuse >= side2
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%d.  (%d, %d, %d)\n", a++, side1, side2, hypotenuse);
                    
                }
            }
        }
    }

    return 0;
}
