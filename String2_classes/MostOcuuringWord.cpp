#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "raghav is a maths teacher. He is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    // cout<<endl;
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    int maxcount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxcount = max(maxcount, count);
    }
    cout << endl;
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxcount)
        {
            cout << v[i] << " " << maxcount << endl;
        }
    }
}