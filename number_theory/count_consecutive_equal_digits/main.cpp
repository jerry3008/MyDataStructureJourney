int solution(int n) 
{ 
    int last_digit = -1;
    int count = 0;
    while(n > 0)
    {
        int digit = n % 10;
        if(last_digit == digit)
        {
            count++;   
        }else 
        {
            last_digit = digit;
        }
        n /= 10;
    }
    return count;
}