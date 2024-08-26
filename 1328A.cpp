#include <iostream>

using namespace std;

int main(){
    long long n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<(a%b==0 ? 0:((a/b+1)*b-a))<<endl;
    }
    return 0;
}
