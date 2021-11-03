#include <bits/stdc++.h>
using namespace std;

int random(int L, int H){
	return (rand()<<16|rand()) % (H-L+1) + L;
}

int main(int argc, char** argv){
	if (argc > 1) srand(atoi(argv[1]));
    else srand(time(NULL));
	freopen("LIS.inp", "w", stdout);
	int n = random(1, 20), m = random(1, 400), amax = 1e6;
	cout << n <<" "<< m << endl;
	for (int i = 1; i <= m; ++i)
        cout << random(1, n) << " " << random(1, n) <<" " << random(1, amax);
}