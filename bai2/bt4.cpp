#include <stdio.h>

int cube(int x) {
    //# trả về lập phương của x
    return x*x*x;

}
double cube(double x) {
    //# trả về lập phương của x
    return x*x*x;

}

int main() {
    printf("Nguyen Van Linh 20194093\n");
    int n;
    double f;
    scanf("%d %lf", &n, &f);

    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));

    return 0;
}
