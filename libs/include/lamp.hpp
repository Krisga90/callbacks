#ifndef LAMP_HPP
#define LAMP_HPP

#include <string>
#include "switchCalableObject.hpp"


class Lamp : virtual public SwitchCallableObject
{
    public:
        Lamp(const std::string & lamp_name):m_name{lamp_name}, m_ON{false}{}
        virtual void pressed() override;
    private:
        std::string m_name;
        bool m_ON;
};

#endif /* LAMP_HPP */