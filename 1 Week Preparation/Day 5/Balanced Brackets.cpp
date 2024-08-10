string isBalanced(string s) {
    
    // use a stack to keep track of the brackets
    stack<char> b;
    char curr = ' ', atTop = ' '; 

    // invalid balanced brackets if the string size is 1
    if (s.size() == 1)
        return "NO";
    
    for (int i = 0; i < s.size(); i++)
    {
        // get the current bracket
        curr = s.at(i);

        // push the respective closing bracket of the current opening bracket
        if (curr == '(' || curr == '[' || curr == '{') 
        {
            switch (curr)
            {
                case '(':
                    b.push(')');
                    break;
                case '[':
                    b.push(']');
                    break;
                case '{':
                    b.push('}');
                    break;
                default:
                    continue;
            }
        }
        // check the current closing bracket
        else 
        {
            // invalid balanced brackets if there is no respective opening brackets
            if (b.empty())
                return "NO";
            
            // gather the most recent bracket
            atTop = b.top();
            
            // invalid balanced brackets if the opnening bracket is not of the same type
            if (atTop != curr)
                return "NO";

            b.pop(); 
        }
    }

    // final check, ensure there are no opening brackets left on the stack
    if (!b.empty())
        return "NO";
    
    return "YES";
