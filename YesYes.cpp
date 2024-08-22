#include<iostream>
#include<string>

using namespace std;


string TEMP = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

bool is_hear(string a){
    return TEMP.find(a) != string::npos;
}

int main(){
    unsigned int n;
    cin>>n;

    while (n--) {
        string s;
        cin>>s;
        cout<<(is_hear(s) ? "YES" : "NO")<<endl;
    }
    return 0;
}
