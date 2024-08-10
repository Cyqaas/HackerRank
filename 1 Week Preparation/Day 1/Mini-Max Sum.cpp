void miniMaxSum(vector<int> arr) {
    
    //initialize necessary variables
    int64_t min = 0, max = 0, curr = 0; 
    int n = arr.size(); 
    
    // iterate through the whole array
    for (int i = 0; i < n; i++)
    {
        // reset the current value
        curr = 0; 
        
        // gather the appropriate sum without value i 
        switch (i)
        {
            case 0: 
                curr += (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[3] + (int64_t)arr[4];
                break; 
            case 1: 
                curr += (int64_t)arr[0] + (int64_t)arr[2] + (int64_t)arr[3] + (int64_t)arr[4];
                break;
            case 2: 
                curr += (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[3] + (int64_t)arr[4];
                break;
            case 3: 
                curr += (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[4];
                break;
            case 4: 
                curr += (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[3];
                break;
        }
        
        // initialize the min and max to be arr[0] as a placeholder
        // conduct a check to see if the current sum is the minimum or maximum
        if (i == 0) 
        {
            min = curr; 
            max = curr;
        }
        else if (curr < min) 
        {
            min = curr;
        }
        else if (curr > max)
        {
            max = curr;
        }
    }
    
    // print out the minimum and maximum
    cout << min << " " << max;
}