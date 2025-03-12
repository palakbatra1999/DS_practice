class Solution {
public:
    bool rotateString(string s, string goal) {
        // Length check is mandatory
        if (s.length() != goal.length()) {
            return false;
        }

        // Concatenation trick — contains all possible rotations
        string combined = s + s;
        return combined.find(goal) != string::npos;
    }
};
