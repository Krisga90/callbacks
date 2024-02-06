#ifndef TV_SET_HPP
#define TV_SET_HPP

#include "switchCalableObject.hpp"
#include <string> 

class TvSet: virtual public SwitchCallableObject
{
    public:
        TvSet(const std::string & name): m_name{name}, m_ON(false){}
        virtual void pressed() override;

    private:
        std::string m_name;
        bool m_ON;
};

#endif /* TV_SET_HPP */