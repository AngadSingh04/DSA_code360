bool isPossible(vector<int>& boards, int mid, int k){

    int painter = 1;
    int sum = 0;
    for(int i = 0; i < boards.size(); i++){
        if (boards[i] > mid) {
            return false; 
        }
        if(sum+boards[i] <= mid){
            sum+=boards[i];
        }else{
            painter++;
            if(painter > k || mid < boards[i]){
                return false;
            }
            sum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int sum = 0;
    int maximumLength = 0;
     for (int i = 0; i < boards.size(); i++) {
        sum += boards[i];
        maximumLength = max(maximumLength, boards[i]);
    }
    int low = maximumLength;
    int high = sum;
    int ans = -1;

    while(low <= high){
        int mid = (low + (high-low)/2);
        if(isPossible(boards, mid, k)==true){
            ans = mid;
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
    
}