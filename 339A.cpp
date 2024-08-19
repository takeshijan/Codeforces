#include <algorithm>
#include<iostream>

using namespace std;

int main(){
    string s,s2 = "";
    cin>>s;
    short inx = 0;
    sort(s.begin(),s.end());

    for(char &c:s){
        if(c>='1'){
            s2.push_back(c);
            s2.append("+");
         
        }
    
    }
    if (!s2.empty()){
        s2.pop_back();
    }
     cout<<s2<<endl;
    return 0;
}
