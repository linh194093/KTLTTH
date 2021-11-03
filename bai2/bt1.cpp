#include <stdio.h>
#include <math.h>

float get_hypotenuse(float x, float y) {
    return pow(x*x + y*y, 0.5);
}

int main(){
    printf("Nguyen Van Linh 20194093\n");
    float x, y;
    scanf("%f%f", &x, &y);

    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);

    return 0;
}
