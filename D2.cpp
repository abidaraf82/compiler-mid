//Create a lexical analyzer that counts the total number of identifiers in a given C/C++ program.*/


#include <bits/stdc++.h>
using namespace std;

bool isIdentifier(string s){
    if(!isalpha(s[0]) && s[0] != '_') return false;
    for(char c:s)
        if(!isalnum(c) && c!='_') return false;
    return true;
}

int main(){
    string line, word;
    int count = 0;
    while(getline(cin,line)){
        string token="";
        for(char c:line){
            if(isspace(c)){
                if(isIdentifier(token)) count++;
                token="";
            } else token+=c;
        }
        if(isIdentifier(token)) count++;
    }
    cout << "Total identifiers = " << count;
}
