int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k, n, q, option, lastK;
    string s = "", append = "", recentState = ""; 
    stack<string> previousStates; 
    cin >> q; 
    
    while (q > 0)
    {
        cin >> option; 
        
        switch(option)
        {
            case 1:
                // gather the string to append, save the previous state, then append the string 
                cin >> append;
                previousStates.push(s);
                s += append; 
                break; 
            case 2:
                // gather the k input and save the previous state
                cin >> k; 
                previousStates.push(s); 
                
                // gather the current n and index of the last k digits
                n = s.size();
                lastK = n - k; 
                
                // delete the last k digits by gathering the substring without them
                s = s.substr(0, lastK);
                break; 
            case 3:
                // gather the k input then print the char at said index
                cin >> k; 
                cout << s[k-1] << endl;
                break; 
            case 4:
                if (!previousStates.empty())
                    recentState = previousStates.top(); 
                    previousStates.pop();
                    s = recentState; 
                break; 
            default:
                continue;
        }
        
        q--; 
    }
    
    return 0;
}