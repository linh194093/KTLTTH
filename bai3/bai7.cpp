#include <bits/stdc++.h>
using namespace std;
//Sử dụng phương pháp khử đệ quy bằng stack, hãy liệt kê các xâu nhị phân độ dài  n  không có  k  bit 1 nào liên tiếp
struct state{
    int i, j, old_L;
    //# constructor
    state(int _i = 0, int _j = 0, int _L = 0):
        i(_i), j(_j), old_L(_L){}
};

// Giả sử lời giải được lưu bởi xâu x1, x2, ..., xn
// i : biểu diễn lời giải bộ phận cấp i, trước đó x1, x2, ..., x[i-1] đã được gán giá trị
// j : giá trị ứng cử viên đang xét cho vị trí x[i]
// old_L: số ký tự 1 liên tiếp ở cuối dãy x1, x2, ..., x[i-1]

// void TRY(int i, int j, int old_L){
//     x[i] = j;
//     if (i == n) {print_sol(); return;}
//     int L = j ? ++old_L : 0;
//     TRY(i + 1, 0, L);
//     if (L + 1 < K) TRY(i + 1, 1, L);
// }

int main() {
    cout << " Nguyen Van Linh 20194093" << endl;
    int n, k;
    cin >> n >> k;
    int x[n+1];
    stack<state> s;
    //# number of consecutive suffix 1
    int L = 0;
    s.push(state(0, 0, 0));
    while (!s.empty()){
        state top = s.top();
        //# if a new binary sequence is found
        if (top.i > n){
            for (int i = 1; i <= n; ++i)
                cout << x[i] << " \n"[i == n];
            s.pop();
            continue;
        }
        s.pop();

        x[top.i] = top.j;
        if(top.j == 1) L = top.old_L + 1;
        else L = 0;

        if(L + 1 < k && top.i < n)    s.push(state(top.i + 1, 1, L));
        s.push(state(top.i + 1, 0, L));
        //# Khử đệ quy

        /*****************
        # YOUR CODE HERE #
        *****************/
    }
    return 0;
}
