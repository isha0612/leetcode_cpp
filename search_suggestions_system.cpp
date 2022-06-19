class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        int i, j;
        sort(products.begin(), products.end());
        for(int k = 1; k <= searchWord.size(); k++) {
            vector<string> t;
            for(i = 0; i < products.size(); i++) {
                for(j = 0; j < k && j < products[i].size(); j++) {
                    if(products[i][j] != searchWord[j]) {
                        break;
                    }
                }
                if(j == k)
                    t.push_back(products[i]);
                if(t.size() == 3)
                    break;
            }
            ans.push_back(t);
        }
        return ans;
    }
};

//another solution

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        set<string> set;
        for(auto s: products)
            set.insert(s);
        int j;
        for(int k = 1; k <= searchWord.size(); k++) {
            vector<string> t;
            for(auto it : set) {
                string s = it;
                for(j = 0; j < k && j < s.size(); j++) {
                    if(s[j] != searchWord[j])
                        break;
                }
                if(j == k)
                    t.push_back(s);
                if(t.size() == 3)
                    break;
            }
            ans.push_back(t);
        }
        return ans;
    }
};
