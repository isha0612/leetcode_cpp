class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1];
    }
};

//another solution

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int>> pq;
        for(int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if(pq.size() > k)
                pq.pop();
        }
        return pq.top();
    }
};

//another solution

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++) {
            push(v, nums[i]);
            if(v.size() > k)
                pop(v);
        }
        return v[0];
    }
    void push(vector<int> &v, int val) {
        v.push_back(val);
        pushHeapify(v, v.size(), v.size() - 1);
    }
    void pushHeapify(vector<int> &v, int n, int i) {
        int parent = (i - 1) / 2;
        if(v[parent] > v[i]) {
            swap(v[parent], v[i]);
            pushHeapify(v, n, parent);
        }
    }
    void pop(vector<int> &v) {
        int val = v[v.size() - 1];
        v[0] = val;
        v.pop_back();
        popHeapify(v, v.size(), 0);
    }
    void popHeapify(vector<int> &v, int n, int i) {
        int minimum = i;
        int l = i * 2 + 1;
        int r = i * 2 + 2;
        if(l < n && v[l] < v[minimum]) {
            minimum = l; 
        }
        if(r < n && v[r] < v[minimum]) {
            minimum = r; 
        }
        if(i != minimum) {
            swap(v[i], v[minimum]);
            popHeapify(v, n, minimum);
        }
    }
};
