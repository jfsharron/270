//  =================================================================
//  Program:			BoxProject
//  File:				MenuClass.h
//  Software Engineer:	Jonas Sharron
//  Date:				16-October-2017
//  =================================================================

#pragma once

#include <string>
#include "Types.h"

using namespace std;

//  =================

    class Menu {
        public:
	    Menu(void);
	    ~Menu(void);

	    MenuChoices Menu::Get();
	    void Menu::Set(MenuChoices);
	    void Menu::DisplayMenu();
	    void Menu::QueryUser();
	    bool Menu::Continue();
	    void Menu::ProcessCommand(Box& );

    private:
	    MenuChoices userMenuSelection;

    };
//  ==================