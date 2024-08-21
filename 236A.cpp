#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
   
    string username;
    cin >> username;
    
    set<char> chars(username.begin(), username.end());
    size_t count = chars.size();
    cout<<(count%2==0 ? "CHAT WITH HER!":"IGNORE HIM!")<<endl;   
    return 0;
}

