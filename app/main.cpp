#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    auto i = 5;
    AnalogSensor lightSensor(i);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = 1;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
