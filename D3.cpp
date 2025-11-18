//Modify your lexical analyzer to remove comments (// and /* */) and return the cleaned code.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string line, cleaned="";
    bool block=false;

    while(getline(cin,line)){
        for(int i=0;i<line.size();i++){
            if(!block && i+1<line.size() && line[i]=='/' && line[i+1]=='/') break;
            if(!block && i+1<line.size() && line[i]=='/' && line[i+1]=='*'){
                block=true; i++; continue;
            }
            if(block && i+1<line.size() && line[i]=='*' && line[i+1]=='/'){
                block=false; i++; continue;
            }
            if(!block) cleaned += line[i];
        }
        cleaned += '\n';
    }
    cout << cleaned;
}


///ctrl+z then Enter to quit taking input
