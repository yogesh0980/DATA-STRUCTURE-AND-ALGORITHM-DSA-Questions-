class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        sort(candidates.begin(), candidates.end());

        backtrack(0, target, candidates, current, result);
        return result;
    }

private:
    void backtrack(int startIdx, int remaining, const vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
        if (remaining == 0) {
            result.push_back(current);
            return;
        }

        for (int i = startIdx; i < candidates.size(); ++i) {
            if (candidates[i] > remaining) {
                break;
            }
            current.push_back(candidates[i]);
            backtrack(i, remaining - candidates[i], candidates, current, result);
            current.pop_back();
        }
    }
};