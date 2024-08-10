void minimumBribes(vector<int> q) {

    // initialize the total bribes and three steps at a time
    int totalBribes = 0;
    int p1 = 1; 
    int p2 = 2; 
    int p3 = 3;

    // have at most 2 bribes, anything greater than 2 is considered chaotic
    for (int i = 0; i < q.size(); i++)
    {
        // in the instance we are in order
        if (q[i] == p1)
        {
            p1 = p2;
            p2 = p3; 
            p3++;
        }
        // in the instance we have one bribe
        else if (q[i] == p2)
        {
            p2 = p3; 
            p3++; 
            totalBribes++; 
        }
        // in the instance we have two bribes
        else if (q[i] == p3)
        {
            p3++;
            totalBribes += 2; 
        }
        // in the instance we have more than three bribes
        else 
        {
            cout << "Too chaotic" << endl;
        }
    }

    // print the total amount of bribes
    cout << totalBribes << endl; 
}