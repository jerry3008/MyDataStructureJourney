#include "solution.hpp"

void BrowserHistory::visit(const std::string &url) 
{
    history_.push_back(url);
    future_.clear();
}

std::string BrowserHistory::back(int steps) 
{
    // TODO: Move the specified number of steps back in the history, if possible, and update the future accordingly
    while(steps > 0 && history_.size() > 1)
    {
        std::string  back1 = history_.back();
        history_.pop_back();
        future_.push_back(back1);
    }
    // Return the current URL after updating
    return history_.back();
}

std::string BrowserHistory::forward(int steps) {
    // TODO: Move the specified number of steps forward in the history, if possible, and update the history accordingly
    while (steps > 0 && !future_.empty()) 
    {
        std::string front1 = future_.front();
        future_.pop_front();
        history_.push_back(front1);
    }
    // Return the current URL after updating
    return history_.back();
}

int main() {
    BrowserHistory browser;
    browser.visit("codesignal.com");
    browser.visit("learn.codesignal.com");
    browser.visit("learn.codesignal.com/course-paths");

    std::cout << browser.back(2) << std::endl;
    std::cout << browser.forward(1) << std::endl;

    // TODO: Use the BrowserHistory class to simulate visiting some URLs, then going back and forward in the history, printing the resulting URL after each move
    
    return 0;
}