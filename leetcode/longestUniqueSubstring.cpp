#include <bits/stdc++.h>
using namespace std;
        // This function returns true if all characters in s[i..j]
        // are distinct, otherwise returns false
        bool areDistinct(string s, int i, int j)
        {
            // Note : Default values in visited are false
            vector<bool> visited(26);

            for (int k = i; k <= j; k++) {
                if (visited[s[k] - 'a'] == true)
                    return false;
                visited[s[k] - 'a'] = true;
            }
            return true;
        }

        // Returns length of the longest subsing
        // with all distinct characters.
        int lengthOfLongestSubstring(string s)
        {
            int n = s.size();
            int res = 0; // result
            for (int i = 0; i < n; i++)
                for (int j = i; j < n; j++)
                    if (areDistinct(s, i, j))
                        res = max(res, j - i + 1);
            return res;
        }

        // Driver code
        int main()
        {
            string sentence;
            cout << "Enter a string > ";
            cin >> sentence; // get user input from the keyboard
            cout << "Enetred string is > " << sentence << endl;
            int len = lengthOfLongestSubstring(sentence);
            cout << "The length of the longest non-repeating character substring is > " << len << endl;
            return 0;
        }
