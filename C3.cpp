//Construct an NFA using Thompson’s Algorithm for: a*|b(a|b)


#include<bits/stdc++.h>
using namespace std;

bool isab(string s)
{
    for(char c:s)
    {
        if(c!='a' && c!='b')
            return false;
    }
    return true;
}

bool matches(string s)
{
    bool a= !s.empty();
    for(char c : s) if(c!='a') a = false;
    if(a) return true;

    if(s.size()==2 && s[0]=='b' && (s[1]=='a' || s[1]=='b'))
        return true;

    return false;
}

int main()
{
    while(1){
    string s;
    cin>>s;
    if(!isab(s))
    {
        cout<<"Invalid input"<<endl;
        continue;
    }
    cout<<(matches ? "Accepted" : "Rejected");
    cout<<endl;
    }
}
