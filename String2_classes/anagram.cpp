// LeetCode 242 :using built in sorting
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cout << "Enter the first string : " << endl;
    cin >> s;
    cout << "Enter the second string : " << endl;
    cin >> t;
    cout << "The original s = " << s << " and t is = " << t << endl;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << "After sorting the both string changes to : ";
    cout << "s= " << s << "     "
         << "t = " << t << endl;
    cout << "Answer is both the given strings are anagram or not ??? ";
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "No";
    }

    return 0;
}