#include <iostream>
#include <vector>
using namespace std;

int main(){
    short n;
    cin>>n;
    vector<short> m;
    while (n--) {
        short x;
        cin>>x;
        m.push_back(x);
    }
    for(auto a:m){
        cout<<a%10+a/10<<endl;
    }
    return 0;
}
