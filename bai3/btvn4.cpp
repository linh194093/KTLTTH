#include <iostream>

using namespace std;

int count = 0;

void Try(int *result, bool *choose, int **c, int n, int k, int i)
{
    for(int j = 0; j != n; ++j)
    {
        if((c[result[i - 1]][j]) && (!choose[j]))
        {
            result[i] = j;
            choose[j] = true;
            if(i < k)
                Try(result, choose, c, n, k, i + 1);
            else ++count;

            choose[j] = false;
        }
    }
}

int main()
{
    cout << "Nguyen Van Linh 20194093" << endl;
    int n, k, m;
    bool *choose;
    int *result;

    cin >> n;
    cin >> k;

    result = new int[k + 1];
    choose = new bool[n];

    int **c;
    c = new int*[n];

    for(int i = 0; i != n; ++i)
        c[i] = new int[n];

    int hx, hy;
    cin >> m;

    for(int i = 0; i != m; ++i)
    {
        cin >> hx >> hy;
        c[--hx][--hy] = true;
        c[hy][hx] = true;
    }

    for(int i = 0; i != n; ++i)
    {
        result[0] = i;
        choose[i] = true;
        Try(result, choose, c, n, k, 1);
        choose[i] = false;
    }
    cout << (count>>1);
}
