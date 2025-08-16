int minSteps(int n) 
{
    //if(n <= 1) return n;
    std::vector<int> steps(n + 1);
    steps[0] = 0; 
    steps[1] = 1;
    for(int i = 2 ; i <= n; ++i)
    {
        steps[i] = 1 + steps[i-1];
        if(i % 2 == 0)
        {
            steps[i] = std::min(steps[i], 1 + steps[i/2]);
        }
    }
    
    
    return steps[n];
}