class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0); // How many people trust this person
        vector<int> outDegree(n + 1, 0); // How many does he trust

        for(vector<int>& pair : trust){
            inDegree[pair[1]]++;
            outDegree[pair[0]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == n - 1 && outDegree[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};