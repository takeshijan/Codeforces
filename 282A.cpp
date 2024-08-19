#include<iostream>
#include<string>

using namespace std;

int main(){
    short n;
    cin>>n;
    string s;
    int x = 0;
    for(short i =0;i<n;i++){
        cin>>s;
        if(s.find("++") != string::npos){
            ++x;
        }
        else if((s.find("--") != string::npos)){
            --x;
        }
    }
    cout<<x<<endl;
}
