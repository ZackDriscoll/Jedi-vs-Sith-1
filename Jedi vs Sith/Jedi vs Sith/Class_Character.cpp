#include "Class_Character.h"
#include <iostream>


std::string Class_Character::GetName()
{
	return Name;
}

void Class_Character::SetName(std::string n)
{
	Name = n;
}
