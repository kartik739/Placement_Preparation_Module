# Pattern 4

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n;i++){
            for(int j=1; j<i+1; j++){
                cout << i <<" ";
            }
            cout << endl;
        }
    }
};

# Pattern 2

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n;i++){
            for(int j=0; j<i+1; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
};

# Sort an array of 0s, 1s and 2s

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        sort(a,a+n);
    }
    
};

# Quick Sort

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high){
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex-1);
            quickSort(arr, pIndex+1, high);
        }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int i = low;
       int j = high;
       while(i<j){
           while (arr[i] <= pivot && i <= high-1){
               i++;
           }
           while (arr[j] > pivot && j >= low+1){
               j--;
           }
           if (i<j) swap(arr[i], arr[j]);
       }
       swap(arr[low], arr[j]);
       return j;
    }
};