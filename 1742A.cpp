#include <iostream>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    while (n--) {
        cin>>a>>b>>c;
        bool ab = a+b == c;
        bool ac = a+c == b;
        bool bc = b+c == a;
        cout<<((ab || ac || bc) ? "YES" : "NO")<<endl;        
    }
    return 0;
}
