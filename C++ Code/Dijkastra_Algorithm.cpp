#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int findMinDV(int *dis,bool *visited,int n){
    int mindv=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&(mindv=-1||dis[i]<dis[mindv]))
            mindv=i;
    }
    return mindv;
}
void dijkstra(int **edges,int n){
    bool *visited=new bool[n];
    int *dis=new int [n];
    for(int i=0;i<n;i++){
        visited[i]=false;
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int i=0;i<n-1;i++){
        int mindv=findMinDV(dis,visited,n);
        visited[mindv]=true;
        for(int j=1;j<n;j++){
         //   int a=dis[j];
            if(edges[mindv][j]!=0 && !visited[j]){
                if(mindv==j){
                    continue;
                }
                dis[j]=min(dis[j],(dis[mindv]+edges[mindv][j]));
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<dis[i]<<endl;
    }
    delete[] dis;
    delete[] visited;
    
    
}

int main() {
    // Write your code here
    int n;
    cin>>n;
    int e;
    cin>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s,w;
        cin>>f>>s>>w;
        edges[f][s]=w;
        edges[s][f]=w;
    }
    cout<<endl;
    dijkstra(edges,n);
    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[] edges;
    return 0;
    
    
}
