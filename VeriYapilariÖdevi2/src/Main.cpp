/**
* @file main.cpp
* @description Main 
* @course Veri Yapilari Grup 2A
* @assignment 2.�dev
* @date 16-23.12.2023
* @author Fatih U�ar fatih.ucar1@ogr.sakarya.edu.tr
*/


#include "Program.hpp"
int main()
{
	Program* program = new Program();
	program->ProgramiBaslat();

	delete program;
}