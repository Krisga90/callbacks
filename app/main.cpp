#include <iostream>
#include "switch.hpp"
#include "lamp.hpp"
#include "tvSet.hpp"





int main(int argc, char** argv)
{
    std::cout << "Hello World!\n";

    Switch switch1("first_one");
    Switch switch2("second_one");

    Lamp lamp1("lamp 1");
    Lamp lamp2("lamp 2");
    Lamp lamp3("lamp 3");

    TvSet tv1("LCD");
    TvSet tv2("LED");    

    switch1.press();
    switch1.connect(&lamp1);
    switch1.press();

    switch1.connect(&tv2);
    switch1.press();

    switch2.connect(&lamp3);
    switch2.press();

    switch1.connect(&lamp1);
    switch1.press();

    return 0;
}