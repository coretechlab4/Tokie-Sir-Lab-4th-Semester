#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,e;
    int u,v,weight;
    cout<<"Enter number of vertex: ";cin>>n;
    cout<<"Enter number of edge: ";cin>>e;

    int adj[n][n];

    //initialize adjacency matrix with 0:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adj[i][j] = 0;
        }
    }

    //print adjacency matrix:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=1; i<=e; i++)
    {
        cout<<"(assuume node1=0) Enter <U> <V>: ";
        cin>>u>>v>>weight;
        adj[u][v] = weight;
    }

    //print adjacency matrix:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }
}

















