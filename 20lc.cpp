#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void func(){

    return;
}
bool isValid(string s) {
        int  i = 0 ,size = s.length()  ,ii;
        if(size%2!=0){
            cout<<"o";
            return  0 ;
        }
        stack<char> stk;
        for(i = 0 ;  i< size ; i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                stk.push(s[i]);
            }else{
                if(stk.empty()){return 0;}
                if(s[i] == ']' && stk.top()!='[' || s[i] == ')' && stk.top()!='(' || s[i] == '}' && stk.top()!='{'){
                    return 0;
                }
                stk.pop();
            }
        }
        return stk.empty();
        
    }
int main(){
    vector<int> arr = {};
    string s  = "([)[]]";
    int a  = 0;
    func();
    cout<<isValid(s);
    return  0 ;
}