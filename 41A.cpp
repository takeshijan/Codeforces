#include <iostream>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"NO";
        return 0;
    }
    short l = s.length()-1;
    for(short i=0;i<=l;i++){
        if((s[i]!=t[l-i])){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
