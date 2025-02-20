vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	int low = 0;
	int high = arr.size() - 1;
	int ans1 = -1;

	vector<int> answer;
	
	while(low <= high){
		int mid = (low+high)/2;

		if(arr[mid]==x){
			ans1 = mid;
			high = mid - 1;
		}else if(arr[mid] < x){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	answer.push_back(ans1);

	int low1 = 0;
	int high1 = arr.size() - 1;
	int ans2 = -1;
	
	while(low1 <= high1){
		int mid = (low1+high1)/2;

		if(arr[mid]==x){
			ans2 = mid;
			low1 = mid + 1;
		}else if(arr[mid] < x){
			low1 = mid + 1;
		}else{
			high1 = mid - 1;
		}
	}
	answer.push_back(ans2);
	return answer;
}

