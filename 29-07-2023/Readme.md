# Print GFG n times

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N==0) return;
        printGfg(N-1);
        cout << "GFG" << " "; 
    }
};

# Reverse Bits

class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long ans = 0;
        int index = 31;
        while(X != 0){
            if(X%2 == 1)
                ans += pow(2, index);
            index--;
            X = X/2;
        }
        return ans;
    }
};

# Pattern 18

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char c= 'A' + n-1;
        for(int i=0; i<n;i++){
            for(int j=0; j<=i; j++){
                cout << (char)(c-j)<< " ";
            }
            cout << endl;
        }
    }
};

# Pattern 14 

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n;i++){
            for(int j=0; j<i; j++){
                cout << char('A'+j);
            }
            cout << endl;
        }
    }
};

# Pattern 3 

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n;i++){
            for(int j=1; j<=i+1; j++){
                cout << j <<" ";
            }
            cout << endl;
        }
    }
};


 