//用Hashmap记录滑动窗口中字符串和位置的对应关系，接着维护滑动窗口
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = -1;
        int length = s.size();
        map <int, int> m;
        for(int i=0; i<length; ++i){
            if (m.count(s[i]) && m[s[i]] > left){
                left = m[s[i]];
            }
            m[s[i]] = i;
            res = max(res, i-left);
        }
        return res;
    }
};