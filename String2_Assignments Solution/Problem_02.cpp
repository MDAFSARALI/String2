#include<iostream>
#include<string>
#include<algorithm>
#include<typeinfo>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    int x=stoi(s);
    int y=x;
    int largest=-1,sec_largest=-1;
    // Calculating the largest number
    while (x>0)
    {
        int digit=x%10;
        if (digit>largest)
        {
            largest=digit;
        }  
         x=x/10;
    }
     cout<<"The largest number is : "<<largest<<endl;
    //  Calculating the second largest
    while (y>0)
    {
         int digit=y%10;
        if (digit>sec_largest && digit!=largest)
        {
           sec_largest=digit;
        }  
         y=y/10;
    }
    if (sec_largest==-1)
    {
       cout<<"There is no second largest number "<<endl;
    }
    else{
            cout<<"The second largest digit is : "<<sec_largest<<endl;
    }
    
}