string twoArrays(int k, vector<int> A, vector<int> B) {
    
    sort(A.begin(), A.end(), less<>());
    sort(B.begin(), B.end(), greater<>());
    
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] + B[i] < k)
            return "NO";
    }
    
    return "YES";    
}