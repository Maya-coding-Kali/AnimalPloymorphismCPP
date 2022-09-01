#pragma once
#include "Animal.h"
class Wild : public Animal
{
public:
	char* GetName();
	void SetName(char*);

	char* GetType();
	void SetType(char*);


};
