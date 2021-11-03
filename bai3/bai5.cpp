#include <iostream>
using namespace std;



int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}

unsigned long long giaithua(int n){
    unsigned long long  sum = 1;
    for(int i = 1; i <= n; ++i)
        sum *= i;
    return sum;
}

int binom2(int n, int k){
    return (giaithua(n)/(giaithua(n-k)*giaithua(k)));
}

int main() {
    cout << " Nguyen Van Linh 20194093 " << endl;
    int m;
    cin >> m;
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom(n, k));
        printf("\n");
    }
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom2(n, k));
        printf("\n");
    }
    return 0;
}
