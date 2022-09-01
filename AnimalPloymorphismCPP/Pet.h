#pragma once
#include "Animal.h"
class Pet : public Animal
{
public:
	 char* GetName() ;
	 void SetName(char*);

	 char* GetType() ;
	 void SetType(char*);


};
