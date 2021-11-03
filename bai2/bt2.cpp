#include <stdio.h>
void rotate(int &x, int &y, int &z) {
    int tmp = x;
    x = y;
    y = z;
    z = tmp;


    /*****************
    # YOUR CODE HERE #
    *****************/
}

int main() {
    printf("Nguyen Van Linh 20194093\n");
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    //# Nhập 3 số nguyên
    /*****************
    # YOUR CODE HERE #
    *****************/

    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);

    return 0;
}
