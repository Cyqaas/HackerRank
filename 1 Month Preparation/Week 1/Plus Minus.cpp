void plusMinus(vector<int> arr) {
    
    float  negatives = 0, zeros = 0, positives = 0, n = arr.size(); 
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negatives++;
        }
        else if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] > 0)
        {
            positives++;
        }
    }
    
    cout.precision(6);
    cout << positives / n << endl; 
    cout << negatives / n << endl; 
    cout << zeros / n << endl; 
}