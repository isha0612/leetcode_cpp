class Skiplist {
public:
    vector <int> arr;
    Skiplist() {
        arr.resize(20001, 0);
    }
    
    bool search(int target) {
        return arr[target];
    }
    
    void add(int num) {
        arr[num]++;
    }
    
    bool erase(int num) {
        if(!arr[num]) return false;
        else arr[num]--;
        return true;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */
