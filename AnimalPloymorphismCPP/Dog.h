#pragma once
#include "Pet.h"
class Dog : public Pet
{
public:
	 char* GetName();
	 void SetName(char*);
	 void SetFood(char*);
	 char* GetFood();
	 char* GetType();
	 void SetType(char*);
	 char* GetSpecies();
	 void SetSpecies(char*);

};
