# Print 1 To N Without Loop


class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if (N==0){
            return;
        }
        printNos(N - 1);
        cout << N<< " ";
    }
};

# Palindrome

//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
            string s="";
			while(n > 0)
			{
				s = s + char((n%10) + '0');
				n /= 10;
			}
			string t = s;
			reverse(t.begin(), t.end());
			if(s == t)
				return "Yes";
			return "No";
		}
};


# Armstrong Numbers


// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum = 0, x = n;
        while(n!=0){
            int digit = n%10;
            sum += digit*digit*digit;
            n = n/10;
        }
        if(sum == x)
            return "Yes";
        return "No";
    }
};

# Count Digits
 

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n = N;
        int count =0;
        while(n > 0){
            int digit = n%10;
            if(digit != 0 && N%digit == 0) count++;
            n/=10;
        }
        return count;
    }
};