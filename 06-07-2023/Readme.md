# Missing number

//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for (int i=1; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
            
        }
        return largest;
    }
};


# Rotating an Array



int missingNumber(int A[], int N)
{
    // Your code goes here
    int xor1=0 , xor2=0;
    int n = N-1;
    for(int i=0; i<n; i++){
        xor2 = xor2 ^ A[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^N;
    return xor1 ^ xor2;
}


# Largest Element in Array

//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        d = d % n;
        int temp[d], i;
        for(i=0; i<d; i++){
            temp[i] = arr[i];
        }
        for(i=d; i<n; i++){
            arr[i-d] = arr[i];
        }
        for(i =n-d; i<n; i++ ){
            arr[i] = temp[i-(n-d)];
        }
    }
};


# Print first n Fibonacci Numbers

//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long > v(n);
        v[0] = v[1] = 1;
        for(int i=2; i<n; i++)
            v[i]= v[i-1]+ v[i-2];
        return v;
    }
};

# LCM And GCD

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        return {(A*B)/__gcd(A,B) , __gcd(A,B)};
    }
};
