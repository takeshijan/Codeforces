#include <iostream>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"NO";
        return 0;
    }
    short j=1,l = s.length()-1;
    for(short i=0;i<=l;i++){
        if(!(s[i]==t[l-i])) j=0;
    }
    cout<<(j==1 ? "YES":"NO");
}
