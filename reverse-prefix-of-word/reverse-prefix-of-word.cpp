class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=0;
        for(int i=0;i!=word.size();i++){
            if(word[i]==ch){
                pos=i;
                break;
            }
        }
        for(int i=0;i<=pos/2;i++)swap(word[i],word[pos-i]);
        return word;
    }
};
