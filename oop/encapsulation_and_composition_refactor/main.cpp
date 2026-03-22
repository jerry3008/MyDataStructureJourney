// Non-refactored main function
int main() {
    AccountManager manager;
    manager.addUser("Alice123", "password1");
    manager.addUser("Bob456", "password2");

    manager.displayUserInfo("Alice123");
    // You can add a method for updating password if you want
    manager.removeUser("Alice123");
    manager.removeUser("UnknownUser");

    return 0;
}