#ifndef SWITCH_CALLABLE_OBJECT_HPP
#define SWITCH_CALLABLE_OBJECT_HPP

class SwitchCallableObject
{
    public:
        virtual void pressed() = 0;
        virtual ~SwitchCallableObject(){};
};

#endif /* SWITCH_CALLABLE_OBJECT_HPP */