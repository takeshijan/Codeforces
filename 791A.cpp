#include <iostream>

using namespace std;

int main(){
    long L,B,year = 0;
    cin>>L>>B;

    while (L <= B){
        L *= 3;
        B *= 2;   
        year++;
    }
    cout<<year<<endl;
    
}
