#include <bits/stdc++.h>
using namespace std;

// fix_n : chuyen bien cuc bo thanh bien toan cuc toi uu code_
map<string, int> Count;
map<string, int>::iterator it;
string s;

void put( map<string, int> Map[], int n, int Max[]){
    int m;
    cin >> m;
    for (int i = 1; i <= m; ++i)
    {
        vector<string> tmpd;
        cin >> s;
        s = s + ",";
        string tmp = "";
        double cur = 0, sum = 0;
        int index = 1;
        int j;

        for (j = 0; j < s.size(); ++j)
        {
            if (s[j] == ',')
            {
                tmpd.push_back(tmp);
                tmp = "";
            }
            else    tmp.push_back(s[j]);
            
        }
        for ( j = 1; j <= n; ++j)
        {
            cur = 0;
            for (int k = 0; k < tmpd.size(); ++k)
            {
                it = Map[j].find(tmpd[k]);
                if (it == Map[j].end())     continue;
                cur += (0.5 + 0.5 * it->second / Max[j]) * log2(1.0 * n / Count.find(tmpd[k])->second);
            }
            if (cur > sum)
            {
                sum = cur;
                index = j;
            }
        }
        cout << index << endl;
    }
}


int main()
{   
    cout << " Nguyen Van Linh 20194093" << endl;
    int n;
    cin >> n;
    int Max[n + 1];
    map<string, int> Map[n + 1];

//duyet 
    for (int i = 1; i <= n; ++i)
    {
        cin >> s;
        s = s + ",";
        string tmp = "";
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j] != ',')    tmp.push_back(s[j]);
            else
            {
                it = Map[i].find(tmp);
                if (it == Map[i].end())   Map[i].insert(make_pair(tmp, 1));
                else    ++it->second;
                tmp = "";
            }
        }
        Max[i] = 0;
        for (auto itr : Map[i])
        {
            it = Count.find(itr.first);
            if (it == Count.end())    Count.insert(make_pair(itr.first, 1));      
            else   ++it->second;
            Max[i] = max( itr.second, Max[i]);
        }
    }

    put(Map, n, Max);
    return 0;
  
}
