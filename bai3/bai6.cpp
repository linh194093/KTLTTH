#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

// tim UCLN cua 2 so cho truoc
int gcd2(int a, int b){
    int c;
    while(1){
        if(a > b) a-=b;
        else if(a < b) b-=a;
        else{
            c = a;
            break;
        }
    }
    return c;
}

int main() {
    cout << "Nguyen Van Linh 20194093" << endl;
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl << gcd2(a, b);
    return 0;
}
