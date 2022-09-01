#pragma once
class Animal
{
protected:
	char* Food;
	char* Name;
	char* Type;
	char* Species;
public:
	virtual char* GetName() = 0;
	virtual void SetName(char*) = 0;
	virtual void SetFood(char*);
	virtual char* GetFood() ;
	virtual char* GetType() = 0;
	virtual void SetType(char*) = 0;
	virtual char* GetSpecies() ;
	virtual void SetSpecies(char*);
};