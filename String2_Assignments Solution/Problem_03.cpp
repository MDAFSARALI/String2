#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : " << endl;
    cin >> str;
    int count = 0;
    int ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        else
        {
            ans += ((count) * (count + 1)) / 2;
            count = 0;
        }
    }
    ans += ((count) * (count + 1)) / 2;
    if (count == 0)
    {
        cout << "There is no any such substring exist :" << endl;
    }
    else
    {
        cout << "The number of substring is : " << ans << endl;
    }
}