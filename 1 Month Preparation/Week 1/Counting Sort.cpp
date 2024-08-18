vector<int> countingSort(vector<int> arr) {
    
    vector<int> result(100);
    
    for (auto curr : arr)
    {
        result[curr]++;
    }

    return result; 
}