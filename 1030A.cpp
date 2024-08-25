#include <iostream>

using namespace std;

int main(){
    unsigned short n,sum=0,m;
    cin>>n;
    while (n--) {
        cin>>m;
        sum+=m;
    }
    cout<<(sum>0 ? "HARD":"EASY")<<endl;
    return 0;
}
