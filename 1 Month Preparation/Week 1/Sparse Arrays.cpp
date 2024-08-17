vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    
    vector<int> results(queries.size());
    int index = 0;
    
    for (auto curr : queries)
    {
        for (auto match : strings)
        {
            if (curr == match)
            {
                results[index]++; 
            }
        }
        
        index++; 
    }
    
    return results;
}