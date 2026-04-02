#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <iostream>

class AlarmClock {
public:
    void setAlarm(const std::string& time);
    std::string showAlarm() const;

protected:
    std::string alarmTime = "00:00";
};

class EnhancedAlarmClock : public AlarmClock
{
    std::string sound_;
    std::string volume_;
    public:
    EnhancedAlarmClock(std::string sound = "beep", std::string volume = "medium");
      
    void setSound(const std::string& sound);
    
    void setVolume(const std::string& volume);
    
    std::string getSettings();
};

// TODO: Define the EnhancedAlarmClock class with methods to set alarm sound and volume.

#endif  // SOLUTION_HPP_