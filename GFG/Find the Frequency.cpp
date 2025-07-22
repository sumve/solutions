class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        unordered_map<int, int> hash;
        for (int num:arr){
            hash[num]++;
        }
        return hash[x];
    }
};