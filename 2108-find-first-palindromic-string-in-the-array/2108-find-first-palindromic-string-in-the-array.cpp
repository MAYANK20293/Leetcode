class Solution {
public:
bool ispalindrome(string w)
    {
        int left=0,right=w.size()-1;
        while(left<right)
        {
            if(w[left]!=w[right])
            return false;
        
        left++;
        right--;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
       for(auto i:words)
       {
        if(ispalindrome(i))
        {
            return i;
        }
       }
       return "";
    }
    

};