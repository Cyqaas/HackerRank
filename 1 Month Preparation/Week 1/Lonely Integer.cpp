int lonelyinteger(vector<int> a) {
    
    unordered_map<int, int> integers; 
    int min = -1; 
    
    for (auto curr : a)
    {
        integers[curr]++;
    }
    
    for (auto curr : integers)
    {
        if (curr.second == 1)
        {
            min = curr.first;
        }
    }
    
    return min; 
}