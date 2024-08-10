string timeConversion(string s) {

    // get the relevant information from the time
    string result = "";
    string timeOfDay = s.substr(8, 2);
    s.erase(8, 2); 
    int hour = stoi(s.substr(0,2));
    
    // take a path depending on the time of day 
    // the result begins with 00 iff time of day is AM and the hour is 12
    if (timeOfDay == "AM" && hour == 12)
    {
        result = "00" + s.substr(2, 6); 
    }
    // the result is itself iff time of day is AM or time of day is PM and the hour is 12 
    else if (timeOfDay == "AM" || (timeOfDay == "PM" && hour == 12))
    {
        result = s;
    }
    // the result is the current hour + 12 since we are past noon
    else if (timeOfDay == "PM")
    {
        result = to_string(stoi(hour + 12) + s.substr(2, 6)); 
    }
    
    // return the result
    return result;
}