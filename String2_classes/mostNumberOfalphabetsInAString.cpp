// //Q:Given a string consisting of lowercase english alphabets Print the characters that is occuring most number of times

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    int max=0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        int count=1;
        for (int j = i+1; j < str.length(); j++)
        {
            if (str[i]==str[j]) count++;        
        }
        if (max<count) max=count; 
    }


    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        int count=1;
        for (int j = i+1; j < str.length(); j++)
        {
            if (str[j]==str[i]) count++;        
        }
        if (max==count) {
            cout<<ch<<" "<<max<<" "<<endl;
        }
    }
    



    return 0;
}