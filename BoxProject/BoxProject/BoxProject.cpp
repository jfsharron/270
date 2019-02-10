//  =================================================================
//  Program:			BoxProject
//  File:				BoxProject.cpp
//  Software Engineer:	Jonas Sharron
//  Date:				16-October-2017
//  =================================================================

#include "stdafx.h"

//  ==============
    int main() {
	
			
		Box box1; // (double length, double width, double height);
		Menu menu;
		
		do {
			menu.DisplayMenu();
			menu.QueryUser();
			menu.ProcessCommand(box1);

	        } while (menu.Continue());


    return 0;
   }  //  function main ()
//  =======================

