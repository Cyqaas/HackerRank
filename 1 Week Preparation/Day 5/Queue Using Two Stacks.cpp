class MyQueue 
{
private: 
    // initialize two stacks input and output
    stack<int> input, output; 

    // helper method to ensure there is always something on the output stack
    void fulfill()
    {
        while (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
    }
    
public: 
    MyQueue()
    {
        
    }

    // push directly into the input stack
    void push(int x)
    {
        input.push(x);
    }
    
    // ensure the output stack is not empty and 
    // store the first element then pop that element from the
    // output stack
    int pop()
    {
        if (output.empty())
            fulfill();
        
        int first = output.top();
        output.pop();
        return first;
    }
    
    // ensure the output stack is not empty and
    // return the first element
    int peek()
    {
        if (output.empty())
            fulfill();
            
        return output.top(); 
    }
    
    // only return true if both stacks are empty
    bool empty()
    {
        return input.empty() && output.empty();
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    // intialize a queue using two stacks class and other variables
    MyQueue doubleStack; 
    int queries, option, x; 
    cin >> queries; 
    
    // iterate for the number of queries
    for (int i = 0; i < queries; i++)
    {
        cin >> option; 
        
        // follow different switch cases based on the option chosen
        switch (option)
        {
            case 1:
                cin >> x; 
                doubleStack.push(x);
                break;
            case 2:
                doubleStack.pop();        
                break;
            case 3:
                cout << doubleStack.peek() << endl;
                break;
            default: 
                continue;
        }
    }
    
    return 0;
}