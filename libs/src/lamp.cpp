#include "lamp.hpp"

#include <iostream>

void Lamp::pressed(){
    std::cout << "Light on  " << m_name;
    if(m_ON)
    {
        m_ON = false;
        std::cout <<" switched off\n";
    }
    else{
        m_ON = true;
      std::cout <<" switched on\n";
    }
}