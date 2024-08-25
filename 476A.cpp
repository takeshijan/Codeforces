#include <iostream>

using namespace std;

int main(){
    short n;
    cin>>n;
    unsigned short p,q,count = 0;
    while (n--) {
        cin>>p>>q;

        if((q-p)>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
