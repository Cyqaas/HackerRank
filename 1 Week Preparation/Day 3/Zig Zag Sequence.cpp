void findZigZagSequence(vector < int > a, int n){
    // problem: debug solution to get an array that is in increasing order up till the middle index, 
    // then after the middle index, the values are in decreasing order
    sort(a.begin(), a.end());

    //problem 1: mid was (n + 1) instead of (n - 1) causing us to get the wrong middle index
    int mid = (n - 1)/2;
    swap(a[mid], a[n-1]);

    int st = mid + 1;

    // problem 2: ed was [n - 1] instead of [n - 2] causing us to swap the middle and last index again
    int ed = n - 2;
    while(st <= ed){
        swap(a[st], a[ed]);
        st = st + 1;

        // problem 3: ed was [ed + 1] instead of [ed - 1] causing us to go the wrong direction
        ed = ed - 1;
    }
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}