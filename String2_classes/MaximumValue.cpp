#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> v = {"0123", "0023", "456", "00182", "940", "2901","001"};
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int value = stoi(v[i]);
        if (value > max)
        {
            max = value;
        }
    }
    cout << "The max value is : " << max << endl;
    return 0;
}