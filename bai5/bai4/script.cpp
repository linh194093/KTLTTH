#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int iTest = 1; iTest <= 10; iTest++){
    	char tmp[10];
    	sprintf(tmp, "%d", iTest);
    	string seed(tmp);
        system((string("test.exe ") + seed).c_str());
        system(string("sol1.exe").c_str());
        system(string("sol2.exe").c_str());
        if(system(string("fc sol1.out sol2.out").c_str()) != 0){
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
}
