#include "solution.hpp"

User::User(const std::string &username, const std::string &email,
         const std::string &passwordHash, const std::string &theme, 
         bool notificationsEnabled):user_profile_(username, email),authentication_(passwordHash), settings_(theme, notificationsEnabled) {}

    bool User::authenticate(const std::string &attemptedPasswordHash) const {
        return authentication_.authenticate(attemptedPasswordHash);
    }

void User::displayFullUserDetails() const 
{
        user_profile_.displayProfile();
        std::cout << "Theme: " << settings_. getTheme() << std::endl;
        std::cout << "Notifications Enabled: " << (settings_.getNotificationsEnabled() ? "Yes" : "No") << std::endl;
}

int main() {
    const std::string USER_NAME = "JaneDoe";
    const std::string USER_EMAIL = "jane@example.com";
    const std::string USER_PASSWORD_HASH = "5f4dcc3b5aa765d61d8327deb882cf99"; // placeholder hash for 'password'
    const std::string USER_THEME = "Dark";
    bool USER_NOTIFICATIONS_ENABLED = true;

    User user(USER_NAME, USER_EMAIL, USER_PASSWORD_HASH, USER_THEME, USER_NOTIFICATIONS_ENABLED);
    user.displayFullUserDetails();

    const std::string attemptedPasswordHash = "5f4dcc3b5aa765d61d8327deb882cf99"; // placeholder hash for 'password'
    bool authenticationResult = user.authenticate(attemptedPasswordHash);
    std::cout << "Authentication successful: " << (authenticationResult ? "true" : "false") << std::endl;

    return 0;
}