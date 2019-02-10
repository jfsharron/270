//  =================================================================
//  Program:			BoxProject
//  File:				Box.cpp
//  Software Engineer:	Jonas Sharron
//  Date:				16-October-2017
//  =================================================================

#include "stdafx.h"
#include "Box.h"
#include <iostream>



//  ================================
    Box::Box(void) {
    }
//  ================================

//  ================================
	Box::Box(double newLength, double newWidth, double newHeight) {

		length = newLength;
		width = newWidth;
		height = newHeight;

	}
//  ================================

//  ================================
    Box::Box(double Length) { 
	}
//  ================================
    Box::~Box(void) {
    } // 
//  =================================

//  =================================
	double Box::GetLength(double &newLength) {

		length = newLength;
		return length;
	}
//  =================================

//  ================================
    double Box::GetWidth(double &newWidth) {

		width = newWidth;
		return width;
	}
//  ================================

//  ================================
    double Box::GetHeight(double &newHeight) {
		
		height = newHeight;
		return height;
    }
//  ================================

//  ================================
	void Box::SetLength() {
		
		cout << "Enter Length: ";
		cin >> length;
		// ==================================================
		// line 68, below, prints correct value (see line 73)
		// cout << "Length: " << length << endl;   
		// ==================================================
	}
//  =================================

//  =================================
	void Box::PrintValues() {

	   // ===================================================
       // line 80, below, prints incorrect value (as does 81-84)
       // see line 68, need to pass by reference
       // ====================================================		
	   cout << "Length:       " << GetLength(length) << " units" << endl; 
	   cout << "Width:        " << GetWidth(width) << " units" << endl;
	   cout << "Height:       " << GetHeight(height) << " units" << endl;	  
	   cout << "Surface Area: " << Area() << " square units" << endl;
	   cout << "Volume:       " << Volume() << " cubic units" << endl;
	   cout << endl;
	}
//  =================================

//  =================================
    void Box::SetWidth() {

		cout << "Enter Width: ";
		cin >> width;
	    }
//  ================================

//  ================================
    void Box::SetHeight() {

		cout << "Enter Height: ";
		cin >> height;
    	}
//  ================================

//  ================================
    double Box::Area() {

	    return 2 * ((length*height) + (width*height)+(length*width));
	}
//  ================================
    double Box::Volume() {

	    return (length*width*height);
	}
//  ================================
