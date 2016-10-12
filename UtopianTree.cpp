#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    int h;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        h =1;
        cin >> n;
        for(int i =0; i<=n ; i++){
            if(i ==0)
                h =h;
            else if(i%2 == 0)
                h = h+1;
            else if(i%2 != 0)
                h = 2*h;
        }
        cout<<h<<endl;
        
    }
    return 0;
}
