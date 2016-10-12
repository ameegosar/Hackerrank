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
        cin >> n;
        int z;
          int no_three=0;
          int no_five=0;
            z=n;
        while(z%3!=0){
            z-=5 ;
        }
        if(z<0)
            cout<<"-1"<<endl;
        else{
            
        int sum_of_five =z*5;
        int sum_of_three = (n-z)*3;
            if(sum_of_five != 0)
            no_five = sum_of_five / 5;
            else 
                no_five = 0;
            if(sum_of_three != 0)
            no_three = sum_of_three /3;
            else
                no_three = 0;
            vector <int> arr(n);
          /*  cout<<"sum of threes:"<<sum_of_three<<endl<<"sum of fives:"<<sum_of_five<<endl;
            cout<<"no of threes"<<no_three<<endl<<"no of fives"<<no_five<<endl;*/
            
         for(int i=0; i<no_five ; i++){
             arr[i] = 5;
             //cout<<"t"<<endl;
         }
            for(int j=0;  j<no_three; j++){
                arr[no_five+j] = 3; 
            }
        for(int k =0; k<no_three + no_five ; k++){
         cout<<arr[k];
        }
            cout<<endl;
        }
    }
        
    return 0;
}
