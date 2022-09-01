#include "Animal.h"

void Animal:: SetName(char* vName) 
{
	Name = vName;
}

char* Animal::GetName()
{
	return Name;
}
void Animal::SetType(char* Vtype)
{
	Type = Vtype;
}

char* Animal::GetType()
{
	return Type;
}
void Animal::SetFood(char* vFood)
{
	Food = vFood;
}

char* Animal::GetFood()
{
	return Food;
}

void Animal::SetSpecies(char* vSpecies)
{
	Species = vSpecies;
}

char* Animal::GetSpecies()
{
	return Species;
}