#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int m, n;


    cin >> m;
    int *M = new int[m + 1];
    for(int i = 0; i <= m; i++)
        cin >> M[i];
    cin >> n;
    int *N = new int[n + 1];
    for(int i = 0; i <= n; i++)
        cin >> N[i];
    int *C = new int[m + n + 1];

    clock_t start, end;
    start = clock();

    for(int i = 0; i <= m + n; i++)
    {
        C[i] = 0;
        if(i <= n)
        {
            if(i <= m)
            {
                for(int k = 0; k <= i; k++)
                {
                    C[i] += M[k] * N[i - k];
                }
            }
            else
            {
                for(int k = 0; k <= m; k++)
                {
                    C[i] += M[k] * N[i - k];
                }
            }
        }
        else
        {
            for(int k = i - n; k <= m; k++)
            {
                C[i] += M[k] * N[i - k];
            }
        }
    }
    int S = 0;
    for(int i = 0; i <= m+n; i++)
    {
        S = S ^ C[i];
    }
    cout << S;

    end = clock();
    double time_use = (double)(end - start) / CLOCKS_PER_SEC*1000000;    //Tính thời gian sử dụng
    cout<<"Thoi gian chay factorial(n): "<<time_use;

}