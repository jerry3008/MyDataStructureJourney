#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>

// TODO: Define the GPU class
class GPU
{
    public:
    void render_graphics();
};

// TODO: Define the RAM class
class RAM
{
    public:
    void load_data();
};
class Motherboard
{
    public:
    void process_tasks();
    
    private:
    GPU gpu;
    RAM ram;
};

class ComputerSystem
{
    private: 
    Motherboard motherboard;
    
    
    public:
    ComputerSystem();
    void run();
};

#endif  // SOLUTION_HPP_