void miniMaxSum(vector<int> arr) {

    int64_t min = -1, max = -1, currSum = 0; 
    
    for (int i = 0; i < arr.size(); i++)
    {
        
        switch (i)
        {
            case 0:
                currSum = (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[3] + (int64_t)arr[4];
                break;
            case 1:
                currSum = (int64_t)arr[0] + (int64_t)arr[2] + (int64_t)arr[3] + (int64_t)arr[4];
                break;
            case 2:
                currSum = (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[3] + (int64_t)arr[4];
                break;
            case 3:
                currSum = (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[4];
                break;
            case 4:
                currSum = (int64_t)arr[0] + (int64_t)arr[1] + (int64_t)arr[2] + (int64_t)arr[3];
                break;
        }
        
        if (i == 0)
        {
            min = currSum; 
            max = currSum;
        }
        else if (currSum < min)
        {
            min = currSum;
        }
        else if (currSum > max)
        {
            max = currSum;
        }
        
    }
    cout << min << " " << max; 
}