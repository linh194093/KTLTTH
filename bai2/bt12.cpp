#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct an
{
    int key;
    int value;
};


int main()
{
    cout << " Nguyen Van Linh 20194093 " << endl;
    an a;
    vector<an> list;

    while(cin >> a.key >> a.value)
    {
        list.push_back(a);
    }

    sort(list.begin(), list.end(),  [](an a, an b)
    {
        if(a.value != b.value) 
            return a.value > b.value;
        else 
            return a.key > b.key;
    });

    for(int i = 0; i < list.size(); ++i)
    {
        cout << list[i].key << " " << list[i].value << endl;
    }
    return 0;
}