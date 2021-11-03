#include <bits/stdc++.h>
using namespace std;
int m, n, Smin = 100000;
long long S = 0;
int cmin = 100000000;
int x[100];
int c[100][100];
vector<int> flag(100, false);
// Một người du lịch xuất phát từ thành phố thứ nhất muốn đi thăm quan tất cả n−1n−1 thành phố khác. mỗi thành phố đúng một lần, rồi quay trở lại thành phố xuất phát.
// Yêu cầu: Cho biết chi phí đi lại giữa các thành phố, hãy giúp người du lịch tìm hành trình với tổng chi phí là nhỏ nhất.
// Input
// Dòng đầu tiên chứa hai số nguyên dương n,m/n,m cách nhau bởi dấu cách (n≤20,m<400).
// m dòng tiếp theo mỗi dòng chứa ba số nguyên dương i,j,c (j≤n,c≤106) biểu thị chi phí đi trực tiếp từ thành phố i đến thành phố j là c.
// Lưu ý: nếu từ thành phố i đến thành phố j nào không mô tả chi phí đi lại thì có nghĩa là không có đường đi trực tiếp từ ii đến j.
// Output
// Ghi ra duy nhất một số là tổng chi phí hành trình nhỏ nhất tìm được.

void TRY(int k)
{
    for (int i = 2; i <= n; i++)
    {
        if (flag[i] == false && c[x[k - 1]][i] != -1)
        {
            flag[i] = true;
            x[k] = i;
            S = S + c[x[k - 1]][i];
            if (k == n)
            {
                if (S + c[i][1] < Smin && c[i][1] != -1)
                    Smin = S + c[i][1];
            }
            else if (S + cmin * (n - k + 1) < Smin)
            {
 
                TRY(k + 1);
            }
            flag[i] = false;
            S = S - c[x[k - 1]][i];
        }
    }
}
int main(int argc, char** argv)
{
    // freopen("LIS.inp", "r", stdin);
    // freopen("sol1.out", "w", stdout);
    int a, b;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                c[i][j] = 0;
            else
                c[i][j] = -1;
        }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cin >> c[a][b];
        if (c[a][b] < cmin)
            cmin = c[a][b];
    }
    x[1] = 1;
    flag[1] = true;
    TRY(2);
    cout << Smin;
}