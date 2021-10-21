#include<bits/stdc++.h>
using namespace std;

int ways(int coin[],int sum,int n){

    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
            t[i][j]=0;
            if(j==0)
            t[i][j]=1;
        }

    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1]<=j)
            t[i][j]=(t[i][j-coin[i-1]])+t[i-1][j];
            else
            t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];

}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int coin[n];
    for(int i=0;i<n;i++)
    cin>>coin[i];

    cout<<"number of ways: "<<ways(coin,sum,n);
}