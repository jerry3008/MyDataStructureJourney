#include "solution.hpp"

EnhancedAlarmClock::EnhancedAlarmClock(std::string sound, std::string volume) {
    setSound(sound);
    setVolume(volume);
}

void AlarmClock::setAlarm(const std::string& time) {
    alarmTime = time;
}

std::string AlarmClock::showAlarm() const {
    return alarmTime;
}

// TODO: Implement the EnhancedAlarmClock class with extended functionality.

void EnhancedAlarmClock::setSound(const std::string& sound) {
    if (sound == "beep" || sound == "ring" || sound == "digital") {
        sound_ = sound;
    } else {
        std::cout << "Unsupported sound type" << std::endl;
        sound_ = "beep";
    }
}

void EnhancedAlarmClock::setVolume(const std::string& volume)
{
    if (volume == "low" || volume == "medium" || volume == "high")
    { 
        volume_ = volume;
    } else {
        std::cout<<"Unsupported volume level"<<std::endl;
        volume_ = "medium";
    } 
}

std::string EnhancedAlarmClock::getSettings() {
    return "Alarm Time: " + alarmTime + ", Sound: " + sound_ + ", Volume: " + volume_;
}


int main() {
    AlarmClock clock;
    clock.setAlarm("07:30");
    std::cout << "Alarm Clock set to: " << clock.showAlarm() << std::endl;

    EnhancedAlarmClock enhancedClock("beep", "medium");
    enhancedClock.setAlarm("06:45");
    enhancedClock.setSound("digital");
    enhancedClock.setVolume("high");
    std::cout << "Enhanced Alarm Clock settings: " << enhancedClock.getSettings() << std::endl;

    return 0;
}
