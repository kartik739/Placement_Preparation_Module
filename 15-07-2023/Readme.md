# Longest Sub-Array with Sum K

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {  
        int ans=0;
        unordered_map<int,int> prefix;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K) ans=max(ans,i+1);
            if(prefix.find(sum-K)!=prefix.end()) {
                int ind=prefix[sum-K];
                if(ind<=i) ans=max(ans,i-ind);
            }
            if(prefix.find(sum)==prefix.end()) prefix[sum]=i;
        }
        
        return ans;
    } 

};

# Maximize Number of 1's

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int i=0,j=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)  m--;
            if(m<0 and arr[j++]==0)  m++;
        }
        return i-j;
    }  
};

# Merge Sort

class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {
         // Your code here
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else 
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<= high; i++)
        {
            arr[i] = temp[i-low];
        }
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {
        //code here
        if(low >= high) return;
        int mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
};
