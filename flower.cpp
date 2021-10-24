#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long int> b_num;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        b_num.push_back(k);
    }
    sort(b_num.begin(),b_num.end());
    long int max=*b_num.rbegin();
    long int min=*b_num.begin();
    long int diff= max-min;
    long long int c;
    if(diff){
        long long int a=count(b_num.begin(),b_num.end(),min);
        int b=count(b_num.begin(),b_num.end(),max);
        c=a*b ;
    }
    else c=(n)*(n-1)/2;
    
    cout<<diff<<" "<<c;
    return 0;
}