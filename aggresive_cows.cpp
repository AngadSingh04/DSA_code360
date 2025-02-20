bool isTrue(vector<int>& stalls, int mid, int k){
    int cow = 1;
    int pos = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i]-pos >= mid){
            cow++;
            if(cow==k){
                return true;
            }
            pos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int low = 0;
    int maxi = 0;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi,stalls[i]);
    }
    int high = maxi;
    int ans = -1;
    while(low<=high){
        int mid = (low + (high-low)/2);
        if(isTrue(stalls, mid, k)){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}