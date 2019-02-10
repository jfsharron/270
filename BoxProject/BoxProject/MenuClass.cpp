//  =================================================================
//  Program:			BoxProject
//  File:				MenuClass.cpp
//  Software Engineer:	Jonas Sharron
//  Date:				16-October-2017
//  =================================================================

#include "stdafx.h"
#include "MenuClass.h"
#include <string>
#include <iostream>

using namespace std;

//  ==========================

    Menu::Menu(void) {
	    userMenuSelection = Quit;
    }

	Menu::~Menu(void) {
    }

//  ================================
	MenuChoices Menu::Get() {
	    return userMenuSelection;
    }
//  ================================

//  ================================
    void Menu::Set(MenuChoices newValue) {

	    userMenuSelection = newValue;
    }
//  ================================

//  ================================
    void Menu::DisplayMenu() {

	    cout << "==================================" << endl;
	    cout << "1: Quit 2: EnterLength" << endl;
	    cout << "3: EnterWidth 4: EnterHeight" << endl;
	    cout << "5: CalculateSurfaceArea" << endl;
	    cout << "6: CalculateVolume 7: Print" << endl;
	    cout << "==================================" << endl;
	    cout << endl;
    }
//  ================================

//  ================================
    void Menu::QueryUser() {

	    int selection;

	    cout << "Enter Menu Selection: ";
	    cin >> selection;

	    switch (selection) {

	        case 1: userMenuSelection = Quit;
		    break;

	        case 2: userMenuSelection = EnterLength;
		    break;

	        case 3: userMenuSelection = EnterWidth;
		    break;

	        case 4: userMenuSelection = EnterHeight;
		    break;

	        case 5: userMenuSelection = CalculateSurfaceArea;
		    break;

	        case 6: userMenuSelection = CalculateVolume;
		    break;

	        case 7: userMenuSelection = Print;
		    break;

	    }  // switch
	   cout << endl;
    }  //  QueryUser
//  ================================

//  ================================
    bool Menu::Continue() {
	    return userMenuSelection != Quit;

    }  //  method Continue()
//  ================================

//  ================================
	void Menu::ProcessCommand(Box& box1) {

		
		
		if (userMenuSelection != Quit) {

			switch (userMenuSelection) {

			case EnterLength:
				box1.SetLength();
				cout << endl;
				break;

			case EnterWidth:
				box1.SetWidth();
				cout << endl;
				break;

			case EnterHeight:
				box1.SetHeight();
				cout << endl;
				break;

			case CalculateSurfaceArea:
				cout << box1.Area() << " square units" << endl;
				cout << endl;
				break;

			case CalculateVolume:
				cout << box1.Volume() << " cubic units" << endl;
				cout << endl;
				break;

			case Print:
				box1.PrintValues();
				break;

				//cout << endl;

			}  //  switch
		}  //  if . . .then
	}  // function ProcessCommand()
//  ================================