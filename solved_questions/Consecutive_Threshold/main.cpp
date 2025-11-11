int solution(const vector<int>& numbers, int threshold) 
{

 int n = numbers.size();
 for(int i = 0; i <= n - 3; ++i)
 {
    if(numbers[i] > threshold && numbers[i + 1] > threshold && numbers[i + 2] > threshold)
    {
        return i
    }
 }
 return -1;
}