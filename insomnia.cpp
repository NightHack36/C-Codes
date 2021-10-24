#include <bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    int lcm =(a/__gcd(a,b))*b;
    return lcm;    
}
int main(){
    int j,k,l,m,d;
    cin>>j;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>d;
    int f1=(d/j)+(d/k)+(d/l)+(d/m);
    int f2=(d/LCM(j,k))+(d/LCM(j,l))+(d/LCM(j,m))+(d/LCM(l,k))+(d/LCM(m,k))+(d/LCM(l,m));
    int t=LCM(LCM(j,k),l);
    int f3=(d/t)+(d/LCM(LCM(m,k),l))+(d/LCM(LCM(j,k),m))+(d/LCM(LCM(j,m),l));
    int f4=d/LCM(t,m);
    int ans= f1-f2+f3-f4;
    cout<<ans;
    return 0;

}