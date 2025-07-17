#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        unordered_map<int,list<int>> adj;

        void addEdge(int u,int v,bool dir)
        {
            // dir-> 0 undirected graph
            // dir-> 1 directed graph

            adj[u].push_back(v);

            if(dir == 0)
                adj[v].push_back(u);

        }

        void printGraph()
        {
            for(auto it:adj)
            {
                cout<<it.first<<"->";
                for(auto i:it.second){
                    cout<<i<<",";
                }cout<<endl;
            }
        }
};

int main()
{
    int n;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    int m;
    cout<<"Enter the number of edges: ";
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printGraph();
    return 0;

}