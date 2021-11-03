#include<iostream>

using namespace std;

//# viết hàm arr_sum

template <class val>
val arr_sum(val *a, int n, val *b, int m){
    val sum = 0;
    for(int i = 0; i < n; ++i){
        sum += a[i];
    }
    for(int i = 0; i < m; ++i){
        sum += b[i];
    }
    return sum;
}

/*****************
# YOUR CODE HERE #
*****************/

int main() {
    cout << "Nguyen Van Linh 20194093\n";
    int val;
    cin >> val;

    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }

    return 0;
}
