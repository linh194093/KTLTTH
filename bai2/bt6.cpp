#include <stdio.h>
#include<iostream>

using namespace std;

void print(int n) {
    printf("n=%d\n", n);
}

int mul3plus1(int n) {
    return n * 3 + 1;
}

int div2(int n) {
    return n / 2;
}


// khai báo các tham số cho các con trỏ hàm odd, even và output
void simulate(int n, int (*odd)(int), int (*even)(int),void (*output)(int)/*****************# YOUR CODE HERE #*****************/)  {

    (*output)(n);
    if (n == 1) return;
    if (n % 2 == 0) {
        n = (*even)(n);
    } else {
        n = (*odd)(n);
    }
    simulate(n, odd, even, output);
}

int main() {
    printf("Nguyen Van Linh 20194093\n");
    int (*odd)(int) = NULL;
    int (*even)(int) = NULL;
    odd = mul3plus1;
    even = div2;


    /*****************
    # YOUR CODE HERE #
    *****************/

    int n;
    scanf("%d", &n);
    simulate(n, odd, even, print);

    return 0;
}
