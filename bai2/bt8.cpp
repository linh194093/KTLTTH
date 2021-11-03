#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main() {
    cout << "Nguyen Van Linh 20194093\n" << endl;
    int val1, val2;
    cin >> val1 >> val2;
    vector< vector<int> > a = {
        {1, 3, 7},
        {2, 3, 4, val1},
        {9, 8, 15},
        {10, val2},
    };


    sort(a.begin(), a.end(), [](const vector<int> &a, const vector<int> &b){
        return accumulate(std::begin(a), std::end(a), 0l) > accumulate(std::begin(b), std::end(b), 0l);
});

// for(int i = 0; i < n; ++i){
//     a[i].pop_back();
// }

   // xuat vector a
    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
