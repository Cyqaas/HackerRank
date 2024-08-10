int lonelyinteger(vector<int> a) {
    // initialize necessary variables
    int n = a.size(); 
    int unique = -1; 

    //use an unordered_map to keep track of the frequencies
    unordered_map<int, int> frequencies; 
    
    // gather the frequencies and insert them into the map
    for (int i = 0; i < n; i++)
    {
        frequencies[a[i]]++;
    }
    
    // iterate through the frequencies to find the unique number
    for (auto i : frequencies)
    {
        if (i.second == 1)
        {
            unique = i.first; 
        } 
    }
    
    // return the result
    return unique;
}