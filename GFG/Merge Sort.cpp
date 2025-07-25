class Solution {
  public:
  
    void merge(vector<int>&arr, int l, int mid, int r){
        vector<int> leftArr(arr.begin() + l, arr.begin() + mid + 1);
        vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + r + 1);
        
        int i = 0, j = 0, k = l;
        
        while(i<leftArr.size() && j<rightArr.size()){
            if(leftArr[i] <= rightArr[j]){
                arr[k++] = leftArr[i++];
            }else{
                arr[k++] = rightArr[j++];
            }
        }
            while(i < leftArr.size()){
                arr[k++] = leftArr[i++];
            }
            while(j < rightArr.size()){
                arr[k++] = rightArr[j++];
            }
    }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l==r) return;
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};