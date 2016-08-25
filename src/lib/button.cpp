#include "button.h"

#include <iostream>

Button::Button()
{
    std::cout << "Button created" << std::endl;
}

Button::~Button()
{
    std::cout << "Button destroyed" << std::endl;
}

void Button::push()
{
    std::cout << "Button pushed" << std::endl;
}

