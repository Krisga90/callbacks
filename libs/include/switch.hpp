#ifndef SWITCH_HPP
#define SWITCH_HPP

#include <string>
#include "switchCalableObject.hpp"


class Switch
{
    public:
        // definition type of pointer for callback
        // using CallbackFunction = void (*)(SwitchCallableObject*);

    Switch(const std::string& name): m_target_object{nullptr}, m_name{name} {}
    inline void connect(SwitchCallableObject* target_object) {m_target_object = target_object;}

    void press();



    private:
        SwitchCallableObject* m_target_object;
        std::string m_name;

};

#endif /* SWITCH_HPP */