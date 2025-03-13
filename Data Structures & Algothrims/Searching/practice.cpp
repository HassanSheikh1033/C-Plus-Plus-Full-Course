void binary(int arr[4],int l, int r, int target){
	if(l > r){
		return -1;
	} 
	
	int mid = l+r/2;
	
	if(arr[mid] == target){
		return mid;
	} else if(arr[mid] < target){
		return binary(arr, mid+1,r,target)
	} else{
		return binary(arr,l, mid-1,target)
	}
	
	linear(arr,n, target,  index+1);
}
