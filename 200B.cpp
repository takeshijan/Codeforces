#include <iostream>

using namespace std;

int main(){
    unsigned short n,m;
    double  avr = 0.0;
    cin>>n;
    for(short i=0;i<n;i++){
        cin>>m;
        avr+=m;
    }
    cout<<(avr/n)<<endl;
    return 0;
}
