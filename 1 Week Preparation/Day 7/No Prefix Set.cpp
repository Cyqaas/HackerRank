void noPrefix(vector<string> words) {
    // create a multiset for the words for future reference
    // create a set for the prefixes words can use
    multiset<string> word_check;
    set<string> all_prefix; 
    
    for (auto w : words)
    {
        // the set is bad if the current word is a prefix of a previous word
        if (all_prefix.find(w) != all_prefix.end())
        {
            cout << "BAD SET" << endl;
            cout << w << endl; 
            return; 
        }
       
        // create a new string to develop prefixes
        string prefix = w; 
        
        while (!prefix.empty())
        {
            // insert the current prefix into the prefix list
            all_prefix.insert(prefix);
            
            // the set is bad if the current prefix is a previous word
            if (word_check.find(prefix) != word_check.end())
            {
                cout << "BAD SET" << endl; 
                cout << w << endl;
                return; 
            }
            // continue checking the prefixes of the word by chipping away 
            // the end of it
            else 
            {
                prefix.pop_back();
            }
        }    
       
        // insert the word into the list if it passes all checks
        word_check.insert(w);
    }
    
    cout << "GOOD SET" << endl;
}