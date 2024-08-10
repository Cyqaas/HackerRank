void plusMinus(vector<int> arr) {

    // get the size of the array
    int n  = arr.size(); 
    int curr = 0;
    float positive = 0, negative = 0, zero = 0; 
    
    // iterate over the array
    for (int i = 0;  i < n; i++)
    {   
        // get the current value
        curr = arr[i];
        
        // update the count for the respective categories
        if (curr == 0) 
        {
            zero++; 
        }
        else if (curr < 0)
        {
            negative++; 
        }
        else if (curr > 0)
        {
            positive++;
        }
    }

    // print the results
    cout.precision(6);
    cout << positive / n << "\n"; 
    cout << negative / n << "\n";
    cout << zero / n << "\n"; 
    
}