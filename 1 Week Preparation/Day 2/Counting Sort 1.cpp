vector<int> countingSort(vector<int> arr) {
    // problem indicates to always declare array of size 100
    vector<int> freq(100);

    // fill that array with initial values of 0, not doing this step would result in an error since indexes would not be initialized
    fill(freq.begin(), freq.end(), 0);
    
    // iterate through the whole array
    for (int i = 0; i < arr.size(); i++)
    {
        // update the frequency index of the current value at arr[i]
        freq[arr[i]]++; 
    }

    // return the frequency values
    return freq; 
}