/*
 * ==============================================================================
 *
 *       Filename:  environment.cpp
 *
 *    Description:  Environment of simulation is defined in this file.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 11:21:19  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawar@ee.iitb.ac.in
 *   Organization:  
 *
 * ==============================================================================
 */


#include <iostream>

#include "globals.hpp"

unique_ptr<Bbox_3> pSolutionBox(new Bbox_3(0.0, 0.0, 0.0, 0.0, 0.0, 0.0));
