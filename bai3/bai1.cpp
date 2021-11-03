#include <iostream>

using namespace std;



int lucas(int n){
    if(n == 0) return 2;
    if(n == 1) return 1;
    int A[n+1];
    A[0] = 2; A[1] = 1;
    for(int i = 2; i <= n; ++i){
        A[i] = A[i-1] + A[i-2];
    }
    return A[n];
}

int main(){
    cout << " Nguyen Van Linh 20194093 " << endl;
    int n;
    cin >> n;
    cout << lucas(n);
    return 0;
}
