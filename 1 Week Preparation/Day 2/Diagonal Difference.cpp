int diagonalDifference(vector<vector<int>> arr) {
    // get the n x n dimensions
    int n = arr.size() - 1;
    int primaryDiag = 0, secondaryDiag = 0; 
    
    // gather the sum of the diagonals
    for (int i = 0; i <= n; i++)
    {
        // primary diagonal goes east to west in the form [i,i]
        primaryDiag += arr[i][i];

        // secondary diagonal goes west to east in the form [i, n - i]
        secondaryDiag += arr[i][n - i];
    }
    
    // return the difference
    return abs(primaryDiag - secondaryDiag);
}