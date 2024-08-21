#include <iostream>

using namespace std;

int main(){
    short n,count = 0;
    string s;
    cin>>n>>s;
    char last = ' ';

    for(short i=0;i<n;i++){
        if(s[i]!=last){
            last = s[i];
            continue;
        }

        count++;
    }
    cout<<count<<endl;
}
