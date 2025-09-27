#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

// TODO: Define the DataFilter class
class DataFilter
{
    private:
    std::vector<int> dataStream;
    
  public:
    DataFilter(const std::vector<int>& input) : dataStream(input) {}
  std::vector<int>filterBelowThreshold(int threshold)
  {
    std::vector<int>filterdata;
    std::copy_if(dataStream.begin(), dataStream.end(), std::back_inserter(filterdata), [threshold](int num) 
    { 
        return num >= threshold; 
    });
    
    return filterdata;
  }
  
    
};
int main()
{
    std::vector<int> data = {3, 12, 25, 33, 45, 8, 19};
    DataFilter df(data);
    
    std::vector<int>filterdata = df.filterBelowThreshold(10);
    std::cout << "Filtered data: ";
    for(auto item : filterdata)
    {
        std::cout<<item<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
// It should have a constructor to accept a data stream (vector of integers)
// It should have a method 'filterBelowThreshold(int threshold)' to filter out values below a certain threshold
// The attribute representing the data container should be private!

// TODO: In a main function, create a DataFilter object with a sample data stream

// TODO: Filter out values below 20 from the data stream

// TODO: Print the filtered data