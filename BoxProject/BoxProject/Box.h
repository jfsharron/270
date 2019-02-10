//  =================================================================
//  Program:			BoxProject
//  File:				Box.h
//  Software Engineer:	Jonas Sharron
//  Date:				16-October-2017
//  =================================================================

#pragma once
#include <string>
#include <iostream>

using namespace std;

//  ==============
    class Box {
	
        public:

		
		    
		Box();
		Box(double newLength, double newWidth, double newHeight);
		Box(double length);
	    ~Box();

		double Area(); 
	    double Volume(); 
	    double GetHeight(double &bewHeight); 
		double GetLength(double &newLength);
	    double GetWidth(double &newWidth);
		void PrintValues();
	    void SetHeight();
		void SetLength();
    	void SetWidth();

		


        private:

	    double length;
	    double width;
	    double height;
			
    }; // Class Box
//  ================


