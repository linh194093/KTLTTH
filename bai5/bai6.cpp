#include <bits/stdc++.h>
using namespace std;

inline char cal(double a){
    if (a < 4) return 'F';
    if (a < 5.5) return 'D';
    if (a < 7) return 'C';
    if (a < 8.5) return 'B';
    return 'A';
}

    int n;
int main(){
    int a;
    cin >> n;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    while(n--){
        cin >> a;
        switch(cal(a)){
            case('A'): A = 1;
            case('B'): B = 1;
            case('C'): C = 1;
            case('D'): D = 1;
            case('F'): F = 1;
        }
    }
    cout << A << " " << B << " " << C << " " << D << " " << F;
}