#pragma once
#include "Wild.h"
class Lion : public Wild
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
