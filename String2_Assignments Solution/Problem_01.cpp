#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string original_string;
    cout << "Enter the Original string : " << endl;
    cin >> original_string;
    string org = original_string;
    cout << "The original string is :" << org << endl;
    reverse(original_string.begin(), original_string.end());
    cout << "After reversing the string became : " << original_string << endl;
    string final_ans = org + original_string;
    cout << "After concatenate : " << final_ans << endl;
}