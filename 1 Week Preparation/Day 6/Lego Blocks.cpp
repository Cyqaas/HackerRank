// did not fully understand the problem so had to look at discussion boards and solutions

int legoBlocks(int n, int m) {
    // modulus for the given problem
    int modulus = pow(10, 9) + 7;
    
    vector<long long int> dp = {0, 1, 2, 4, 8};
    vector<long long int> allWalls = {0};
    vector<long long int> validWalls = {0};
    
    // 
    for (int i = 1; i <= m; i++)
    {
        if (i >= 5)
        {
            dp.push_back((dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4]) % modulus);
        }
        
        allWalls.push_back(1);
    
        for (int j = 1; j <= n; j++)
        {
            allWalls[i] *= dp[i];
            allWalls[i] %= modulus; 
        }
        validWalls.push_back(allWalls[i]);
    }
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            validWalls[i] += modulus - (validWalls[j] * allWalls[i -j]);
            validWalls[i] %= modulus; 
        }
    }
    
    return validWalls[m];
}