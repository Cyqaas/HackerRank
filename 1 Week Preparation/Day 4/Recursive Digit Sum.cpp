int superDigit(string n, int k) {
    
    // base case 
    if (n.size() == 1)
    {
        return n.at(0) - '0'; 
    }
    // break down the integer
    else 
    {
        // get the sum of the current number
        long next = 0;
        
        for (int i = 0; i < n.size(); i++)
        {
            next += n.at(i) - '0'; 
        }
        
        // then multiply it by k
        next *= k;
        
        // break the problem down further
        return superDigit(to_string(next), 1);
    }
}