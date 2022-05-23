class Solution {
public:
    vector<vector<int>> sol;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> temp;
        temp.push_back(0);
        dfs(graph, 0, graph.size() - 1, temp);
        return sol;
    }
    void dfs(vector<vector<int>>& graph, int s, int d, vector<int>& temp) {
        if(s == d) {
            sol.push_back(temp);
            return;
        }
        for(auto child : graph[s]) {
            temp.push_back(child);
            dfs(graph, child, d, temp);
            temp.pop_back();
        }
    }
};
