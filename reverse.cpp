#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s="sakshi";
    stack<char> m;

    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        m.push(ch);
    }

    string ans="";
    while(!m.empty()){
        char ch=m.top();
        ans.push_back(ch);
        m.pop();
    }
    cout<<" reverse of sakshi is: "<<ans<<endl;


}