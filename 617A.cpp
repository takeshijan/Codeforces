#include <iostream>

using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int total_foot = n/5;
    int reminder = n%5;
    cout<< total_foot + (reminder > 0 ? 1 : 0);
    return 0;
}
