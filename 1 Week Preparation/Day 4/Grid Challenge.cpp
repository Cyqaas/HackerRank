string gridChallenge(vector<string> grid) {
    
    //  intialize necessary variables
    string col = "";
    string colSorted = "";
    
    // first sort out the rows of the grid
    for (int i = 0; i < grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }

    // iterate through every column
    for (int i = 0; i < grid[0].size(); i++)
    {
        col = "";
    
        // iterate through every row of ith column
        for (int j = 0; j < grid.size(); j++)
        {
            col += grid[j].at(i);
        }

        // check to see if the current column is in alphabetical order
        colSorted = col;
        sort(colSorted.begin(), colSorted.end());

        if (col != colSorted)
        {
            return "NO";
        }
    }
    
    return "YES";
}