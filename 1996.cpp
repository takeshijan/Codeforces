#include <iostream>
 
using namespace std;
 
int main(){
    long long n,result = 0;
    cin>>n;
    int bills[] = {100 , 20, 10, 5, 1};
    for(int bill : bills){
        result += n/bill;
        n %= bill;
    }
    cout<<result<<endl;
    return 0;
}
