int cookies(int k, vector<int> A) {

    // sweetness = (1 x least sweet cookie + 2 x second least sweet cookie)
    // doing this gets rid of both cookies and leaves behind the combination
    // of one sweet cookie
    
    // use multiset to allow for quicker access time when it comes to adding
    // and removing elements. Multiset is similar to a set in that it is a container
    // for elements, however, deleting elements can be done quicker and inserting
    // them allows the sequence to be automatically sorted. This is due to the insert 
    // algorithm for the structure using binary search to find where the element
    // belongs. 
    multiset<int> cookie_map;
    multiset<int>::iterator it = cookie_map.begin();
    unsigned int need_sweetening = 0;
    
    // sort the given vector so adding elements in the multiset can be in
    // increasing order
    sort(A.begin(), A.end());
    
    // iterate through the list once to find elements that need sweetening
    // and add them into the multiset
    for (auto cookie : A)
    {
        if (cookie < k)
            need_sweetening++;
        
        it = cookie_map.insert(it, cookie);
    }
    
    unsigned int iterations = 0; 
    multiset<int>::iterator it2;
    
    // iterate until all initial cookies are sweetened enough AND 
    // all elements in the multiset are sweetened
    while (need_sweetening > 0 && cookie_map.size() > 1)
    {
        // gather the first and second least sweet cookies
        it = cookie_map.begin(); 
        int first_cookie = *it; 
        it2 = it; 
        it2++; 
        
        int second_cookie = *it2; 
        
        // then initialize a new cookie with the given formula
        int new_cookie = first_cookie + (2 * second_cookie);
        
        // erase the current iterations of cookies and add the new one
        cookie_map.erase(it);
        cookie_map.erase(it2);
        cookie_map.insert(new_cookie);
        
        // decrement the amount of cookies that need sweetening
        // and increase the amount of cookies that need sweetening iff new 
        // cookie is less than the desired amount
        if (first_cookie < k) need_sweetening--;
        if (second_cookie < k) need_sweetening--; 
        if (new_cookie < k) need_sweetening++;
        
        // update the number of iterations
        iterations++; 
    }
    
    // return -1 if there are still cookies that need to be sweetened, 
    // will occur if vector size is 1
    if (need_sweetening > 0)
        return -1;
    
    return iterations;
}