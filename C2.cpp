///Convert the regular expression: (ab+b)*a

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
    int i=0,n=s.size();
    while(i<n-1){
        if(s.substr(i,2)=="ab") i+=2;
        else if(s[i]=='b') i++;
        else break;
    }
    return (i==n-1 && s.back()=='a');
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
    cout<<(matches(s) ? "Accepted" : "Rejected");
    }
}
