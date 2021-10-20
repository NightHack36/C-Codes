#include<bits/stdc++.h>
using namespace std;
int mem[2000][2000];

/*
int subsetsum(vector<int>& arr,int n,int S )
{
    memset(mem , -1 , sizeof(mem));

    if(S==0)
    return 1;
    if(n<=0)
    return 0;
if(mem[n-1][S]!=-1) return mem[n-1][S];
    if(arr[n-1]>S)
    {
        return mem[n-1][S] = subsetsum(arr,n-1,S);
    }
    else
    return mem[n-1][S] = subsetsum(arr,n-1,S) || subsetsum(arr,n-1,S-arr[n-1]);

   }

   void equalsumpartition(vector<int>& arr,int n,int S)
   {
       if(S%2!=0)
       cout<<"No"<<endl;
       else{
           if(subsetsum(arr , n , S/2)){
               cout<<"Yes"<<endl;
           }
           else
           cout<<"No"<<endl;
            
       }

   }
   int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    int S=0;
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
        S += arr[i];
    }
    equalsumpartition(arr,n,S);
    
    // cout<<knapsack_0oo(weight,cost,W);
    return 0;
}
*/

/* 01 knapsack
    int knapsack_01(vector<int>& weight,vector<int>& cost , int W )

{
    int n = weight.size();
    assert(cost.size() == n);

    int dp[W+1] = {0};
    for(int i = 0 ; i<n ; i++) {          
        for(int j = W ; j >= weight[i]; j--) 
        {
            dp[j] = max(dp[j] , dp[j - weight[i]]+cost[i]);
        }
    }
    int max1 = 0;
    for(int i=0;i<=W;i++)
    {
        max1 = max(max1 , dp[i]);
    }
    return max1;
}

int main()
{
    int n , W;
    cin>>n>>W;
    vector<int> weight(n);
    vector<int> cost(n);
    for(int i=0;i<n;i++)
    {
        
        cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
         cin>>cost[i];
    }
    cout<<knapsack_01(weight,cost,W);
    // cout<<knapsack_0oo(weight,cost,W);
    return 0;
}

*/

/*
int subsetsum(vector<int>& arr,int n,int S )
{
    if(S==0)
    return 1;
    if(n<=0)
    return 0;
if(mem[n-1][S]!=-1) return mem[n-1][S];
    if(arr[n-1]>S)
    {
        return mem[n-1][S] = subsetsum(arr,n-1,S);
    }
    else
    return mem[n-1][S] = subsetsum(arr,n-1,S) || subsetsum(arr,n-1,S-arr[n-1]);

   }
   
  int subsetsum(vector<int>& arr,int n,int S )
{
    if(S==0)
    return 1;
    if(n<=0)
    return 0;
if(mem[n-1][S]!=-1) return mem[n-1][S];
    if(arr[n-1]>S)
    {
        return mem[n-1][S] = subsetsum(arr,n-1,S);
    }
    else
    return mem[n-1][S] = subsetsum(arr,n-1,S) + subsetsum(arr,n-1,S-arr[n-1]);

   }



int main()
{
    memset(mem , -1 , sizeof(mem));
    int n , S;
    cin>>n>>S;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    
    cout<<subsetsum(arr,n,S);
    // cout<<knapsack_0oo(weight,cost,W);
    return 0;
}
*/

/*
int knapsack_0oo(vector<int>& weight,vector<int>& cost , int W)
{
    int n = weight.size();
    assert(cost.size() == n);

    int dp[W+1] = {0};
    for(int i = 0 ; i<n ; i++) {          
        for(int j = weight[i] ; j <=W; j--) 
        {
            dp[j] = max(dp[j] , dp[j - weight[i]]+cost[i]);
        }
    }
    int max1 = 0;
    for(int i=0;i<=W;i++)
    {
        max1 = max(max1 , dp[i]);
    }
    return max1;
}

*/














