//Graph
#include <iostream>
#include <list>
#include <map>
using namespace std;

class Graph{
    map<int, list<int> > AdjList;
    public:
    void add_Edge(int u, int v){
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    
    void display(){
        for(auto i : AdjList){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<" ";
            }cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.add_Edge(1,2);
    g.add_Edge(1,4);
    g.add_Edge(4,2);
    g.display();
    return 0;
}