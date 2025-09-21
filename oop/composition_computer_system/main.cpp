#include "main.hpp"

// TODO: Implement the GPU class method to render graphics.
void GPU::render_graphics()
{
    std::cout<<"GPU is rendering graphics"<<std::endl;
}

// TODO: Implement the RAM class method to load data.
void RAM::load_data()
{
    std::cout<<"RAM is loading data"<<std::endl;
    
}
void Motherboard::process_tasks()
{
    gpu.render_graphics();
    ram.load_data();
}

void ComputerSystem::run()
{
    std::cout<<"Computer System is running"<<std::endl;
    motherboard.process_tasks();
    
}
// TODO: Implement the Motherboard class which includes both GPU and RAM.
ComputerSystem::ComputerSystem() {};
// TODO: Implement the ComputerSystem class which includes the Motherboard.

int main() {
    ComputerSystem my_workstation;
    my_workstation.run(); // Initialize workstation and process graphics/data
    return 0;
}