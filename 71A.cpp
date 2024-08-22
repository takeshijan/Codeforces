#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    short n;
    cin>>n;
    vector<string> s;
    for(short i=0;i<n;i++){
        string satr;
        cin>>satr;
        short l = satr.length();
        if(l>10){
           s.push_back((satr[0]+to_string(l-2))+satr[l-1]);
        }
        else {
            s.push_back(satr);
        }
    } 
    for(short i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
}
