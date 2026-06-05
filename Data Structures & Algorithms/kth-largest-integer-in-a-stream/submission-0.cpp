class KthLargest {
public:
vector<int>arr;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->arr=nums;
        this->k=k;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(), arr.end());
        return arr[arr.size()-k];
    }
};

//[1, 2, 3, 3, 3, 5, 6, 7,8]