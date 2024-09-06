#include <iostream>

using namespace std;

int main(){
    unsigned long long n,t;
    cin>>t;
    while (t--) {
        cin>>n;
        cout<<(n % 2 == 0 ? (n/2-1) : (n/2))<<endl;
    }
    return 0;
}
