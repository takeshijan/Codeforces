#include <iostream>

using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    unsigned m[2][n];
    int  result = 0,max = 0;
    for(int i=0;i<n;i++){
        cin>>m[0][i]>>m[1][i];
        result -= m[0][i];
        result += m[1][i];
        if(result>max){
            max = result;
        }    
    } 
    cout<<max<<endl;
    return 0;
}
