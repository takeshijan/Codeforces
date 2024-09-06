#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> s = {"abc","acb","bac","cba"};
    short n;
    string a;
    cin>>n;
    while (n--) {
        cin>>a;
        cout<<(find(s.begin(),s.end(),a) != s.end() ? "YES":"NO")<<endl;
    }
    return 0;
}
