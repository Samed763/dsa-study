class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> str;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                str.push(c);
            else
            {
                if (str.empty() ||
                    (c == ')' && str.top() != '(') || (c == ']' && str.top() != '[') || (c == '}' && str.top() != '{'))
                    return false;
                str.pop();
            }
        }
        return str.empty();
    }
};