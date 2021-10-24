#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int odd=1;odd*odd<n;odd+=2){
        long long int odd2= odd*odd;
        for( int even=2; even*even <=n-odd2;even+=2){
            if(__gcd(odd,even)==1){
                int even2=even*even;         
                int c=odd2+even2;
                if(c<=n){
                    cnt+=n/c;
                }
                     
            }
        }
    }
    cout<<cnt;
    return 0;

}