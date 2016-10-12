#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int s;
       
        int r= 0;
        int rem;
        cin >> n;
         s=n;
        //cout<<n<<endl;
        int div = 0;
        vector<int> arr(1000);
        while(n != 0){
            rem = n%10;
            arr[div] = rem; 
            //cout<<arr[div]<<endl;
            if(arr[div] == 0){
                r =r;
            }
            else if(s%arr[div] == 0){
                r = r+1;
                //cout<<r<<endl;
                //cout<<s<<"is divisible by"<<arr[div]<<endl;
            }
            else 
                r =r;
            div++;
                n = n/10;
           
            
        }
        
        cout<<r<<endl;
    }
    return 0;
}
