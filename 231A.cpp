#include<iostream>

using namespace std;

int main(){
    int n,res = 0;
    int p,v,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>v>>t;
        int c = p+v+t;
        if(c>=2){
            res++;
        }
    }
    cout<<res<<endl;
}
