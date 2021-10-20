#include<bits/stdc++.h>
using namespace std;

int kaden(vector <int>& A){
    int curr_sum = A[0] , max_sum = A[0];
    
        for(int i = 1 ; i<A.size();i++){
            curr_sum = max(curr_sum + A[i] , A[i]);
            max_sum = max(max_sum , curr_sum);
        }
        return max_sum;
    }
    int main()
    {
        vector<int> A = {-2 , 2 , 8 , -4 , 10};
        cout<< kaden(A) << "\n";
    
    }
    
