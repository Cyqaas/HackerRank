string timeConversion(string s) {
    
    int hour = stoi(s.substr(0, 2));
    s.erase(0, 2);
    string timeOfDay = s.substr(6, 2);
    s.erase(6, 2);
    
    if (hour == 12 && timeOfDay == "PM")
    {
        return to_string(hour) + s; 
    }
    else if (hour == 12 && timeOfDay == "AM")
    {
        return "00" + s; 
    }
    else if (timeOfDay == "PM")
    {
        return to_string(hour + 12) + s; 
    }
    else 
    {
        return "0" + to_string(hour) + s; 
    }
    
}