int solution(int n) 
{
    int value = 0;
    while(n > 0)
    {
        int digit = n % 10;
        value = value * 10 + digit;
        n = n / 10;
    }
   
    
    return value; // Placeholder return
}