#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>
#include <vector>

// TODO: Define a base class named GraphicShape with a pure virtual method named "identify"
class GraphicShape
{
    public:
    virtual std::string identify() const = 0;
    
};

class Pentagon : public GraphicShape
{
  public:
  std::string identify() const override
  {
    return "I am a Pentagon with 5 sides.";
  }
    
};

class Hexagon : public GraphicShape
{
  public:
  std::string identify() const override
  {
    return "I am a Hexagon with 6 sides.";
  }
    
};

// TODO: Define a subclass of GraphicShape named Pentagon with its identify method returning "I am a Pentagon with 5 sides."

// TODO: Define another subclass of GraphicShape named Hexagon with its identify method returning "I am a Hexagon with 6 sides."

#endif  // SOLUTION_HPP_