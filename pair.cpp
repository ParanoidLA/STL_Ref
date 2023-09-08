#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Pairs

    // Initialisation
    pair<int, string> p;
    p = make_pair(2, "abc");

    // p = {2, "abcd"};
    // cout << p.first << " " << p.second << endl;

    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;

    // Relation btwn 2 arrays
    pair<int, int> p_arr[4];
    for (int i = 0; i < 4; i++)
    {
        p_arr[i] = make_pair(i, i + 1);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second<<endl;
        
    }
}