
int getPivot(int* arr, int n){
    int low = 0;
    int high = n-1;

    while(low<high){
        int mid = (low + (high-low)/2);
        if(arr[mid]>=arr[0]){
            low = mid+1;
        }else{
            high=mid;
        }
    }
    return low;
}

int binaryS(int* arr, int l, int h, int key){
    int low = l;
    int high = h;

    while(low<=high){
        int mid = (low + (high-low)/2);
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

int search(int* arr, int n, int key) {
    // Write your code here.
    int pivot = getPivot(arr, n);
    if(key >= arr[pivot] && key <= arr[n-1]){
        return binaryS(arr, pivot, n-1, key);
    }else{
        return binaryS(arr, 0, pivot-1, key);
    }

}