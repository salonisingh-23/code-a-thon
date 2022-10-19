class Solution {
public:
    int shortestWay(string source, string target) {
        int count = 0,  t_i = 0;
        while (t_i < target.size()) {
            int t_old = t_i;
            for (int i = 0;i < source.length();i++) {
                if (source[i] != target[t_i]) continue;
                t_i++;
            }
            if (t_i == t_old) return -1; // nothing same found, return -1
            count += 1;
        }
        return count;
    }
};