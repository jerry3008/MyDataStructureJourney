int solution(int n) 
{
    bool has_odd = false;
    int product = 1;
    while(n)
    {
       int digit = n % 10;
       
       if(digit % 2 != 0)
       {
            product *= digit; 
            has_odd = true;
       } 
       n = n / 10;
    }
    if (has_odd) return product;
    else return 0;
}