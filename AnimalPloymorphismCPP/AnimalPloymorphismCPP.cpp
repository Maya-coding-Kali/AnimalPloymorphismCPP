// AnimalPloymorphismCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Pet.h"
#include "Bird.h"
#include "Lion.h"
#include "Rhino.h"
int main()
{
    std::cout << "Polymorphic:\n";
    Dog D;
    D.SetSpecies((char*)"Dog");
    D.SetFood((char*)"Bones");
    D.SetName((char*)"Spirit");
    D.SetType((char*)"Hound");
    std::cout << "My Dogs information:\n";
    std::cout << "Food:\n";
    std::cout << D.GetFood()<< std::endl;
    std::cout << "Name:\n";
    std::cout << D.GetName() << std::endl;
    std::cout << "Type:\n";
    std::cout << D.GetType() << std::endl << std::endl;


    Cat C;
    C.SetSpecies((char*)"Cat");
    C.SetFood((char*)"Fish");
    C.SetName((char*)"Catfish");
    C.SetType((char*)"Mange");
    std::cout << "My Cats information:\n";
    std::cout << "Food:\n";
    std::cout << C.GetFood() << std::endl;
    std::cout << "Name:\n";
    std::cout << C.GetName() << std::endl;
    std::cout << "Type:\n";
    std::cout << C.GetType() << std::endl << std::endl;


    Bird B;
    B.SetSpecies((char*)"Bird");
    B.SetFood((char*)"Cats");//haha
    B.SetName((char*)"Birdy");
    B.SetType((char*)"Awesome");
    std::cout << "My Bird information:\n";
    std::cout << "Food:\n";
    std::cout << B.GetFood() << std::endl;
    std::cout << "Name:\n";
    std::cout << B.GetName() << std::endl;
    std::cout << "Type:\n";
    std::cout << B.GetType() << std::endl << std::endl;

    Lion L;
    L.SetSpecies((char*)"Lion");
    L.SetFood((char*)"Meat");
    L.SetName((char*)"Andy");
    L.SetType((char*)"Small");
    std::cout << "My Bird information:\n";
    std::cout << "Food:\n";
    std::cout << L.GetFood() << std::endl;
    std::cout << "Name:\n";
    std::cout << L.GetName() << std::endl;
    std::cout << "Type:\n";
    std::cout << L.GetType() << std::endl << std::endl;

    Rhino R;
    R.SetSpecies((char*)"Rhino");
    R.SetFood((char*)"Cabbage");
    R.SetName((char*)"Steve");
    R.SetType((char*)"Black");
    Animal* Animals[5];
    Animals[0] = &D;
    Animals[1] = &C;
    Animals[2] = &B;
    Animals[3] = &L;
    Animals[4] = &R;
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Species:\n";
        std::cout << Animals[i]->GetSpecies() << std::endl;
        std::cout << "Food:\n";
        std::cout << Animals[i]->GetFood() << std::endl;
        std::cout << "Name:\n";
        std::cout << Animals[i]->GetName() << std::endl;
        std::cout << "Type:\n";
        std::cout << Animals[i]->GetType() << std::endl << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
