#include <FineObj.h>
#include <iostream>

void func()
{
    // some std:: or FObj:: code

    std::string str("Preveeeeeeeeeeeeeeeeeeeeeeeeeeeeeed!");
    std::cout << str << std::endl;

    // some std:: or FObj:: code
}


int FineMain( int argc, wchar_t** argv )
{
    func();

    std::cout << getchar() << std::endl;
    return 0;
}
