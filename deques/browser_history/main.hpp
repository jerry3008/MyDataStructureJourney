
#include <deque>
#include <string>
#include <iostream>

class BrowserHistory {
public:
    void visit(const std::string &url);
    std::string back(int steps);
    std::string forward(int steps);

private:
    std::deque<std::string> history_;
    std::deque<std::string> future_;
};