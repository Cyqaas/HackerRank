int diagonalDifference(vector<vector<int>> arr) {
    
    int sum1 = 0, sum2 = 0, n = arr.size() - 1; 
    
    for (int i = 0; i <= n; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][n - i];
    }
    
    return abs(sum1 - sum2);
}