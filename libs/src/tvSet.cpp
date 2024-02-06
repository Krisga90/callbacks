#include "tvSet.hpp"

#include <iostream>

void TvSet::pressed(){
    std::cout << "Tv " << m_name;
    if(m_ON)
    {
        m_ON = false;
        std::cout <<"is off\n";
    }
    else{
        m_ON = true;
      std::cout <<"is on\n";
    }
}