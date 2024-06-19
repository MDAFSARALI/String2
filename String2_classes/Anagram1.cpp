#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    string t;
    cout << "Enter the first string " << endl;
    cin >> s;
    cout << "Enter the first string " << endl;
    cin >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << "Yes both the given string are anagram" << endl;
    }
    else
    {
        cout << "No Not a anagram" << endl;
    }
}