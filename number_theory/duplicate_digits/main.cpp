int solution(int n) 
{
    int multiplier = 1;
    int result = 0;
    while(n > 0)
    {
        int digits = n % 10 ;
        result += digits * multiplier;
        multiplier *= 10;
        result += digits * multiplier;
        multiplier *= 10;
        n /= 10; 
    }
    // TODO: Implement the solution
    return result;
}