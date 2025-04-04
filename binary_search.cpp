// using loops

int search(vector<int> &nums, int target) {
    // Write your code here.
    int l = 0;
    int h = nums.size() - 1;

    while(l <= h){
        int mid = l + (h - l)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid] < target){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }

    return -1;
}

// Using recursion


int isBinarySearch(vector<int> &arr, int l, int h, int key){
    int mid = l + (h-l)/2;

    if(l > h){
        return -1;
    }
    if(arr[mid] == key){
        return mid;
    }else{
        if(arr[mid] > key){
            return isBinarySearch(arr, l, mid-1, key);
        }else{
            return isBinarySearch(arr,mid+1, h, key);
        }
    }
}

int search(vector<int> &nums, int target) {
    // Write your code here.

    int l = 0;
    int h = nums.size()-1;

    int ans = isBinarySearch(nums, l, h, target);
    return ans;
   
}