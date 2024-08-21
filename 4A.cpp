#include <iostream>

using namespace std;

int main(){
    short n;
    cin>>n;
    if(n==2){
        cout<<"NO";
        return 0;
    }
    cout<<(n%2==0 ? "YES":"NO");
    return 0;
}
