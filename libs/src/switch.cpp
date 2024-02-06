#include "switch.hpp"
#include <iostream>


void Switch::press()
{
    std::cout << "Switch " << m_name << " pressed\n";
    if(m_target_object)
    {
        m_target_object->pressed();
    }
    else
    {
        std::cout << "No device connected to the switch\n";
    }
}