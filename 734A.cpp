#include <iostream>

using namespace std;

int main(){
    unsigned int n,d=0,a=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        switch (s[i]) {
           case  'A':a++ ; break;
           case  'D':d++ ; break;
        }
    }

    cout<<(a==d ? "Friendship" : (a>d ? "Anton":"Danik"));

}
