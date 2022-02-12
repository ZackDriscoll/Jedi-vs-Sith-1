#include <iostream>
#include "Class_Character.h"
#include "Class_Jedi.h"
#include "Class_Sith.h"

//Prototype functions here
void DisplayIntro();
void Scenario();

//Create character objects
Class_Jedi jedi;
Class_Sith sith;

//Main function
int main()
{
	jedi.SetName("Luke Skywalker");
	sith.SetName("Darth Sidious");

	//Call DisplayIntro()
	DisplayIntro();

	//Call Scenario function
	Scenario();

	//Because it is an int function, it needs to return an int value
	//Standard practice is to have int functions return zero
	return 0;
}

//Function to run an Introduction for the user
void DisplayIntro()
{
	std::cout << "\n\nWelcome to Jedi vs. Sith!\n";
	std::cout << "Prepare to fight for the fate of the galaxy!" << std::endl;

	//Build scenario
	std::cout << "This is a battle between the evil Sith Lord, " << sith.GetName() << " and the Jedi Knight " << jedi.GetName() << std::endl;
}

void Scenario()
{
	//Access the Jedi and Sith Force powers
	jedi.ForcePush();
	sith.ForceLightning();

	std::cout << "Whose power was more effective? That is up to you to decide..." << std::endl;
	std::cout << "Thanks for playing!" << std::endl;
}