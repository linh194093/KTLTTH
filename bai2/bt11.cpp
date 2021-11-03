#include <iostream>
using namespace std;

int main(){
    cout << "Nguyen Van Linh 20194093" << endl;
    int n, m;
    cin >> n;   int a[n++];
    int i = 0;
    for(; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;
    int b[m+1], c[n+m+1];

    for(i = 0; i <= m; ++i){
        cin >> b[i];
    }

    for(i = 0; i < m+n; ++i)
        c[i] = 0;

    for(i = 0; i < n; ++i)
        for(int j = 0; j <= m; ++j)
            c[i + j] += (a[i] * b[j]);

    int xoc = c[0];
    for(i = 1; i < n+m; ++i)
        xoc ^= c[i];

    cout << xoc;
  
    return 0;

}