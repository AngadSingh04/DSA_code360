
bool isPossible(vector<int>& arr, int mid, int m){
    int student = 1;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]+sum <= mid){
            sum += arr[i];
        }else{
            student++;
            if(student > m || mid < arr[i]){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int sum = 0;
    for(int i=0; i < arr.size(); i++){
        sum += arr[i];
    }
    int low = 0;
    int high = sum;
    int ans = -1;
    
    while(low<=high){
        int mid = (low + (high-low)/2);
        if(isPossible(arr,mid,m)==true){
            ans = mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}