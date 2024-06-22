#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter the string s : "<<endl;
    cin>>s;
    cout<<"Enter the string t :"<<endl;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    bool ans=false;
    if (s==t)
    {
        ans=true;
    }
    if (ans==true)cout<<"True";
    else cout<<"False";
}