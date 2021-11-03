#include <iostream>

using namespace std;

bool next(int *result, int n)
{
    int i = n - 1;
    int count = 0;
    while(((result[i] - result[i - 1]) != 1) && (i))
        i--;
    if(i == 0) return false;
    result[i] = 0;
    result[i - 1] = 1;
    for(int j = n - 1; j != i; --j)
    {
        if(result[j] == 1) count++;
    }
    for(int j = n - 1; j != n - count - 1; --j) result[j] = 1;
    for(int j = n - count - 1; j != i; --j) result[j] = 0;
    return true;
}

void print(int *result, int n)
{
    for(int i = 0; i != n; ++i)
        cout << result[i];
    cout << endl;
}

int main()
{
    cout <<"Nguyen Van LInh 20194093" << endl;
    int n, h, p;
    int *result;
    cin >> p;
    while(p > 0)
    {
        cin >> n;
        cin >> h;
        result = new int[n];
        for(int i = n - 1; i != n - h - 1; --i)
            result[i] = 1;
        for(int i = 0; i != n - h; ++i)
            result[i] = 0;
        do print(result, n);
        while(next(result, n));
        delete [] result;
        p--;
        cout << endl;
    }
}
