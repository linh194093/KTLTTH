#include <iostream>


using namespace std;

void Try(int n, int a, int b, int *result, int k)
{
    for(int i = 0; i < a; i++)
        result[i + k] = 1;
    for(int i = a; i <= b; i++)
    {
        if(k + i + a < n)
        {
            result[k + i] = 0;
            Try(n, a, b, result, k + i + 1);
            result[k + i] = 1;
        }
        else break;
    }

    if((k + a - 1 <= n - 1) && (k + b >= n - 1))
    {
        for(int i = k + a; i <= n; i++)
            result[i] = 1;
    }
    if((k + a < n) && (k + b >= n - 1))
    {
        result[n - 1] = 0;
        for(int i = 0; i < n; i++)
            cout << result[i];
        cout << endl;
    }
    if(((k + a - 1) <= n) && (k + b - 1 >= n - 1))
    {
        result[n - 1] = 1;
        for(int i = 0; i < n; i++)
            cout << result[i];
        cout << endl;
    }
}

int main()
{
    cout << "Nguyen Van Linh 20194093" << endl;
    int n, a, b;
    int *result;
    cin >> n;
    cin >> a;
    cin >> b;
    result = new int[n];
    result[0] = 0;
    Try(n, a, b, result, 1);
    Try(n, a, b, result, 0);
}
