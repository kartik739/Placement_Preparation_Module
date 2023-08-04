# Pattern 1

class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n; i++){
            for(int i=1;i<=n; i++){
                cout<< "* ";
            }
            cout<<endl;
        }
    }
};

# Union of Two Sorted Arrays

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0, j=0;
        vector<int> unionArr;
        while(i<n && j<m){
            if(arr1[i] <= arr2[j] ){
                if (unionArr.size() == 0 || unionArr.back() != arr1[i]){
                    unionArr.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if (unionArr.size() == 0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (j<m){
            if (unionArr.size() == 0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
            }
            j++;
        }
        while (i<n){
            if (unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        return unionArr;
    }
    
};

# Remove duplicate elements from sorted Array

//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i =0; 
        for(int j=1; j<n; j++){
            if(a[j] != a[i]){
                a[i+1] = a[j];
                i++;
            }
        }
        return (i+1);
    }
};

# Second Largest

//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = arr[0];
	    int slargest = -1;
        for (int i=1; i<n; i++){
            if(arr[i] > largest){
                slargest = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > slargest){
                slargest = arr[i];
            }
        }
        return slargest;
	}
};

# Bubble Sort

//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for (int i=n-1; i>=1; i--)
        {
            int didswap =0;
            for(int j=0; j<=i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    didswap=1;
                }
            }
            if(didswap == 0){
                break;
            }
        }
    }
};


