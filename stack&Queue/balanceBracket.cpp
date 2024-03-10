#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string isBalanced(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
            {
                return "NO";
            }
            else
            {
                char top = st.top();
                st.pop();
                if (symbols[bracket] + symbols[top]!= 0)
                {
                    return "NO";
                    break;
                }
            }
        }
    }
    if (st.empty())
        return "YES";
    else
        return "NO";
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string brac;
        cin >> brac;
        cout << isBalanced(brac) << endl;
    }
    
}
