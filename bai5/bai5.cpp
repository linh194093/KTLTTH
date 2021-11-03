#include <bits/stdc++.h>
using namespace std;

int n;
int found = 0;

int main(){
    cin >> n;
    int a;
    while(n--){        
        cin >> a;
        if ((!(a % 4) && (a % 100)) || !(a % 100))
        {
            found = 1;
            cout << "Yes" << endl;
            break;
        }
    }
    if(!found) cout << "No";
    return 0;
}