# Frequencies of Limited Range Array Elements

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {
        multiset<int>m;
        for(auto it:arr) m.insert(it);
        for(int i = 0; i<arr.size(); i++) arr[i] = m.count(i+1);
    }
};

# Print N to 1 without loop

class Solution {
  public:
    void printNos(int N) {
        // code here
         if(N==0){
            return ;
        }
        cout << N << " ";
        printNos(N-1);
    }
};

# Sum of all divisors from 1 to n

//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        int i = 1;
        long long count = 0;
        while(i<=N){
            count += (N/i)*i;
            i++;
        }
        return count;
    }
};

# Pattern 15

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=n; i>=1; i--){
            for(char j=1;j<=i; j++){
                cout << char(64+j);
            }
            cout <<endl;
        }
    }
};

# Pattern 16

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n;i++){
            for(int j=0; j<=i; j++){
                cout << (char)('A'+i);
            }
            cout << endl;
        }
    }
};
