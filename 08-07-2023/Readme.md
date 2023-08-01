# Searching an element in a sorted array

class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
        for(int i=0; i<N; i++){
            if(arr[i] == K)
            return 1;
        }
        return -1;
       
    }
};

# Quick Left Rotation

class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) {
    k = k % n;
    
    reverse(arr, arr + k);
    
    reverse(arr + k, arr + n);
    
    reverse(arr, arr + n);
}
};

# Find all factorial numbers less than or equal to N

//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> result;
        long long factorial = 1;
        for(int i=1;i<=N;i++){
            factorial = factorial*i;
            if(factorial>N) break;
            result.emplace_back(factorial);
        } 
        return result;
    }
};

# Find all pairs with a given sum

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here 
        vector<pair<int,int>> ans;
        sort(A,A+N);sort(B,B+M);
        for(int i=0,j=M-1;(i<N && j>=0);){
            if((A[i]+B[j])==X){
                ans.push_back(make_pair(A[i],B[j]));i++;j--;
            }
            else if((A[i]+B[j])<X){
                i++;
            }
            else if((A[i]+B[j])>X){
                j--;
            }
        }
        return ans;
    }
};

# Move all zeroes to end of array

//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code 
	    vector<int> temp;
	    for(int i=0; i<n; i++){
	        if(arr[i] != 0){
	            temp.push_back(arr[i]);
	        }
	    }
	    int nonzeros = temp.size();
	    for(int i =0; i<nonzeros; i++){
	        arr[i] = temp[i];
	    }
	    for(int i= nonzeros; i<n; i++){
	        arr[i] = 0;
	    }
	}
};