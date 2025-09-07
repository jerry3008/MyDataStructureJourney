#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>
#include <string>

class GraphicObject {
public:
    virtual std::string draw() const = 0;
};

class Circle : public GraphicObject {
public:
    std::string draw() const override;
    // TODO: Function signature for draw
};

class Square : public GraphicObject {
public:
    // TODO: Function signature for draw
    std::string draw() const override;
};

#endif  // SOLUTION_HPP_