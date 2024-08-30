#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int n,n_1;
    cin>>n;
    while (n--) {
        cin>>n_1;
        int sum = 0, index = 0, m;
        while (n_1--) {
            cin>>m;
            sum+= pow(-1,index)*m;
            index++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
