#pragma once
#include "Class_Character.h"


//Create 2 classes that inherit from the Character class
class Class_Jedi : public Class_Character
{
public:
	void ForcePush();

	std::string name = Class_Character().Name;

};

