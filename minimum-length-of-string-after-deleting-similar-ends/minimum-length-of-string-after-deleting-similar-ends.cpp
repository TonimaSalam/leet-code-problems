class Solution {
public:
    int minimumLength(string s) {
        int cur_char=s[0];
        int left=0;
        int right=s.size()-1;
        int ans=0;
        int length = s.size();
        for(int i=0;i<length;i++){
            if(s[left]!=s[right] || left>=right)break;
            while(left<length && s[left]==cur_char)left++;
            while(right>=0 && s[right]==cur_char)right--;
            i=left;
            cur_char=s[left];
        }
        cout<<right<<" "<<left<<endl;
        if(left<=right) ans=right-left+1;
        return ans;
    }
};