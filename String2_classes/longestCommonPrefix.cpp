// Longest common prefix 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v={"flower","flow","flight"};
    int n=v.size();
    // lexographically sorting
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    string first=v[0];
    string last=v[n-1];
    string s="";
    for (int i = 0; i < min(first.size(),last.size()); i++)
    {
        if (first[i]==last[i])
        {
            s+=first[i];
        }
        else{
            break;
        }
    }
    
    



    return 0;
}