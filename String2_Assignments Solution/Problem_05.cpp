#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string org;
    cout<<"Enter the string : "<<endl;
    getline(cin,org);
    stringstream ss(org);
    string temp;
    vector<string>v;
    while (ss>>temp)
    {
       v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int size=v.size();
    cout<<"The lexicographically maximum word is : "<<v[size-1]<<endl;
}