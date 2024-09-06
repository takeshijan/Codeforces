#include <iostream>
#include <set>

using namespace std;

int main(){
    set<unsigned long long> s;
    unsigned long long n;
    for(short i=0;i<4;i++){
        cin>>n;
        s.insert(n);
    }
    cout<<4-s.size()<<endl;
    return 0;
}
