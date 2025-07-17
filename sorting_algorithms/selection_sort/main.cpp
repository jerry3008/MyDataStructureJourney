#include <utility>
#include <vector>

// TODO: Implement selection sort algorithm
void selectionSort(std::vector<int> &arr) 
{
    if(arr.empty() || arr.size() <= 1)
    {
        return;
    }
    int currentinsx;
    for(int i = 0; i < arr.size() - 1; ++i)
    {
        currentinsx = i;
        for(int j = i + 1; j < arr.size(); ++j)
        {
            if(arr[j] < arr[currentinsx])
            {
                currentinsx = j;
            }
        }
        std::swap(arr[i], arr[currentinsx]);
    }
}