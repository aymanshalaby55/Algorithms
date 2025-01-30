/*
check if the graph is bipartite or not

-defination :
A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

-rules

There are no self-edges (graph[u] does not contain u).

There are no parallel edges (graph[u] does not contain duplicate values).

If v is in graph[u], then u is in graph[v] (the graph is undirected).

The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.

*/



class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int i, vector<int>& color, int currColor){
        
        color[i] = currColor;

        for(int& value: graph[i]){
            if(color[i] == color[value]) return false;
            if(color[value] == -1){
                color[value] = 1 - color[i];
                if(!dfs(graph, value, color, color[value])) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int> color(n+1, -1);

        for(int i=0; i<n; i++){
            if(color[i] == -1 && !dfs(graph, i, color, 1)){
                return false;
            }
        }
        return true;
    }
};