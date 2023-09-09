#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size" << v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {  
        cout << v[i] << endl;
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    //Vector declaratino
    vector<int> v1(10,4);
    printVec(v1);
    cout<<"Hey"<<endl;
    v1.pop_back();

}