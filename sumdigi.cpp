#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    
if(b>10){
        bool check=false;
        int j=0;
        for( j=0;j<10;j++){
            long k=a*10+j;
            if(k%b==0){  
                check=true;           
            break;
            }}
        if(check) {
            cout<<a<<j;
            for(int i=1;i<n;i++){
            cout<<0;
        }   }
        else cout<<"-1";
    }
    else if(b==10){
        cout<<a;
        for(int i=0;i<n;i++){
            cout<<0;
        }
    }
    else{
        cout<<a;
        for(int i=0;i<n;i++){
            if(!i){
                for(int j=0;j<10;j++){
                    long k=a*10+j;
                    if(k%b==0){
                        cout<<j;
                        break;
                    }
                }
            }
            else cout<<b;
        }
    }
    
   return 0; 
}