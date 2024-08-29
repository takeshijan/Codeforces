#include <iostream>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    while (n--) {
        cin>>a>>b>>c;
        short ab = a+b == c;
        short ac = a+c == b;
        short bc = b+c == a;
        cout<<((ab || ac || bc) ? "YES" : "NO")<<endl;        
    }
    return 0;
}
