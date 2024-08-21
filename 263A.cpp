#include <iostream>

using namespace std;

int main(){
    int m[5][5];
    short i_=0,j_=0;
    for(short i=0;i<5;i++){
        for(short j=0;j<5;j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                i_ = i;
                j_ = j; 
            }
        }
    }
    cout<<(abs(2-i_)+abs(2-j_));
}
