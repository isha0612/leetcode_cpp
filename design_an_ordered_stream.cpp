class OrderedStream {
public:
    int i = 0;
    vector<string> ans;
    OrderedStream(int n) {
        ans.resize(n, "");
    }
    
    vector<string> insert(int idKey, string value) {
        ans[idKey - 1] = value;
        vector<string> sol;
        while(ans[i] != "" && i < ans.size()) {
            sol.push_back(ans[i]);
            i++;
        }
        return sol;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
