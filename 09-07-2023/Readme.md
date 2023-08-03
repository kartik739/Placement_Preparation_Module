# Check if array is sorted

// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for( int i =1; i<n; i++){
            if(arr[i] >= arr[i-1]){

            }
            else {
                return false;
            }
        }
        return true;
    }
};

# Insertion Sort

class Solution
{
    public:
    void insert(int arr[], int n)
    {
        //code here
        for (int i=0 ; i <n ; i++)
        {
            int j=i;
            while (j >0 && arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
       if(n<2)
        {
            return ;
        }
        insert(arr,n);
        insertionSort(arr,n-1);
    }
};

# Selection Sort

class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
        // code here such that selectionSort() sorts arr[]
        int min_index = i;
        for(int j=i; j<n;j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
    return min_index;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0; i<n; i++)
       {
           int min_index=i;
           int j = select(arr, min_index, n);
           swap(&arr[j], &arr[min_index]);
       }
    }
};

# Palindrome String

//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.length()-1;
	    for(int i=0;i<=n/2;i++){
	        if(S[i]!=S[n-i])
	        return 0;
	    }
	    return 1;
	}

};