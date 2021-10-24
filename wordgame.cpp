#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int size1=s.length();
    vector<int> rep;
    for(int i=0;i<26;i++){
        int k=count(s.begin(),s.end(),char(i+97));
        if(k) rep.push_back(k);
    }
    int count=0;
    sort(rep.begin(),rep.end());
    bool odd =true;
    for(int i=0;i<rep.size();i++){
        if(rep[i]%2){
            if(odd){
                odd=false;
                continue;
            }
            else count++;
        }
    }
    if(count%2) cout<<"Second";
    else cout<<"First";

}