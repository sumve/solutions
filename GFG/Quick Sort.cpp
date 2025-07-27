class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low<high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<=j){
            while(i <= high && arr[i] <= pivot) {
                i++;
            }
            while(j >= low+1 && arr[j] > pivot){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
};