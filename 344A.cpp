#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int last=0,count = 0,m;
    while (n--) {
        cin>>m;
        if(m != last) count++;
        last = m;
    }
    cout<<count<<endl;
    return 0;
}
