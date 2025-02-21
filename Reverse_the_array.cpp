void reverseArray(vector<int> &arr , int m) {
    // Write your code here       
    	int low = m+1;
        int high = arr.size()-1;

        while(low<=high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }

}