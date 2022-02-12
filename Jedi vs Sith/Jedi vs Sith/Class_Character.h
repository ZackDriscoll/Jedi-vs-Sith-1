#pragma once
#include <string>
#include "Class_Game_Structure.h"


//Create a class called Character which inherits from the Game_Structure class
class Class_Character : public Class_Game_Structure
{
	public:
		//Create a public property in the Character class and call it Name
		std::string Name;

		//Getter and Setter methods for Name
		std::string GetName();
		void SetName(std::string n);

	private:
		//Create one private property called Health in the Character superclass.
		int Health = 10;

};

