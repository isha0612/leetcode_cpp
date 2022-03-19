class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack <int>> mp; 
    int mx;
    FreqStack() {
        mx = 0;
        freq.clear();
        mp.clear();
    }
    
    void push(int val) {
        freq[val]++;
        mx = max(freq[val], mx);
        mp[freq[val]].push(val);
    }
    
    int pop() {
        int x = mp[mx].top();
        mp[mx].pop();
        if(!mp[freq[x]--].size()) mx--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
