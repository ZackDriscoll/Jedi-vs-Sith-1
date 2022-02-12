#pragma once
#include "Class_Character.h"


//Create 2 classes that inherit from the Character class 
class Class_Sith : public Class_Character
{
public:
	void ForceLightning();

	std::string name = Class_Character().Name;

};

