//Write a lexical analyzer that identifies the following tokens from input text:
// Keywords: int, float, if, else
// Identifiers
// Numbers
// Operators: + - * / =
//Test on:
//int x = y + 45;


#include <bits/stdc++.h>
using namespace std;

bool isKeyword(string s){
    return s=="int" || s=="float" || s=="if" || s=="else";
}

bool isIdentifier(string s){
    if(!isalpha(s[0]) && s[0] != '_') return false;
    for(char c:s)
        if(!isalnum(c) && c!='_') return false;
    return true;
}

bool isNumber(string s){
    for(char c:s) if(!isdigit(c)) return false;
    return !s.empty();
}

bool isOperator(char c){
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='=';
}

int main(){
    string line;
    getline(cin,line);
    string token="";
    for(char c : line){
        if(isspace(c) || isOperator(c) || c==';'){
            if(!token.empty()){
                if(isKeyword(token)) cout<<token<<" : Keyword\n";
                else if(isNumber(token)) cout<<token<<" : Number\n";
                else if(isIdentifier(token)) cout<<token<<" : Identifier\n";
                else cout<<token<<" : Invalid\n";
                token="";
            }
            if(isOperator(c)) cout<<c<<" : Operator\n";
        }
        else token += c;
    }
}
