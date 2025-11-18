//Construct an NFA for the regular expression: a(b|c)*

#include<bits/stdc++.h>
using namespace std;

bool isabc(string s)
{
    for(char c:s)
    {
        if(c!='a' && c!='b' && c!='c')
            return false;
    }
    return true;
}

bool matchRegex(string s)
{
    if(s[0]!='a') return false;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!='b' && s[i]!='c') return false;
    }
    return true;
}

int main()
{
    while(1){
    string s;
    cin>>s;
    if(!isabc(s))
    {
        cout<<"Invalid input"<<endl;
        continue;
    }
    cout<< (matchRegex(s) ? "Accepted" : "Rejected");
    cout<<endl;
    }
}
