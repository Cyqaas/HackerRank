string caesarCipher(string s, int k) {
    // k = k % 26
    // this will ensure we never reach indexes that are way out of bounds
    // and get the appropriate character
    k = k % 26; 
    int n = s.size();
    
    // key idea: use ascii values of characters to cipher them and manipulate the string directly 
    for (int i = 0; i < n; i++)
    {
        // uppercase letter bounds
        if (s[i] >= 65 && s[i] <= 90) 
        {
            // reset to the beginning if we are past the upper limit
            if (s[i] + k > 90) 
            {
                s[i] -= 26; 
            }
            // add the rotation
            s[i] += k; 
        }
        // lowercase letter bounds
        else if (s[i] >= 97 && s[i] <= 122)
        {
            // reset to the beginning if we are past the upper limit
            if (s[i] + k > 122)
            {
                s[i] -= 26; 
            } 
            // add the rotation
            s[i] += k;
        }
    }
    
    return s; 
}