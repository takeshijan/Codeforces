#include <algorithm>
#include <iostream>

using namespace std;

int main(){
   int n,a,b,c;
   cin>>n;
   while (n--) {
       cin>>a>>b>>c;
       int arr[3]  = {a,b,c};
       sort(arr,arr+3);
       cout<<arr[1]<<endl;
   }

   return 0;
}
