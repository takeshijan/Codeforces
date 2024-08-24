#include <iostream>

using namespace std;

int main(){

    long long number;
    cin >> number;
    int count = 0;
    while (number != 0){

        if (number % 10 == 4 || number % 10 == 7){
            count += 1;
        }
        number /= 10;
    }

    cout<<(count == 4 || count == 7 ? "YES":"NO");
    return 0;
}
