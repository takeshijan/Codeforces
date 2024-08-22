#include <iostream>

using namespace std;

int main(){
    unsigned long k,w,n,total_sum = 0;
    cin>>k>>n>>w;
    total_sum = k * w * (w + 1) / 2;
    cout<<(total_sum > n ? total_sum - n : 0);
    return 0;
}
