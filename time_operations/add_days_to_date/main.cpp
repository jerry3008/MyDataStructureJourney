#include <sstream>
#include <string>
#include <vector>
using namespace std;
#include <iomanip> 

 bool is_leap_year(int year) 
{
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}
std::string add_days(const std::string& date, int n) {
    std::vector<int> days_in_month{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    stringstream ss(date);
    string date_num;
    
    int i = 0;
    int year, month , day;
   
    while(getline(ss, date_num, '-'))
    {
        if(i == 0) year = std::stoi(date_num);
        else if (i == 1) month = std::stoi(date_num);
        else if (i == 2) day = std::stoi(date_num);
        ++i;
    }
    if(is_leap_year(year))
    {
        days_in_month[2] = 29;
    }else{
        days_in_month[2] = 28;
    }
    while (n > 0)
    {
        int days_left = days_in_month[month] - day + 1;
        if(n < days_left)
        {
            day += n;
            n = 0;  
        }else
        {
            n -= days_left;
            day = 1;
            month++;
        }
        if(month > 12)
        {
            month = 1;
            year++;
            if(is_leap_year(year))
            {
                days_in_month[2] = 29;
                
            }else{
                days_in_month[2] = 28;
            }
        }
    }
    std::ostringstream os;
    os << std::setw(4) <<std::setfill('0')<<year<<"-"<<setw(2)<<std::setfill('0')<<month<<"-"<<setw(2)<<std::setfill('0')<<day;
    return os.str();
}