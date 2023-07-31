# Pattern 6

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0; i<n; i++){
            for(int j=1; j<=n-i; j++){
                cout << j <<" ";
            }
            cout << endl;
	    }
	}
};

# Union of two arrays

//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set <int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            s.insert(b[i]);
        }
        return s.size();
    }
};

# Pattern 13

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int k=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << k << " ";
                k++;
            }
            cout << endl;
        }
    }
};

# Pattern 5

class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout << "*" <<" ";
            }
            cout << endl;
        }
	}
};

# Sum of first n terms

// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
        long long sum = N * (N + 1) / 2;
        return sum*sum;
    }
};
