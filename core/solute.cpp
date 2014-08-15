/*
 * ==============================================================================
 *
 *       Filename:  solute.cpp
 *
 *    Description:  Solute in solvent.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 07:03:03  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */


#include "solute.h"
#include "globals.hpp"

Solute::~Solute()
{

}

/**
 * @brief  Declare a solute.
 *
 * @param name
 * @param density
 * @param molar_mass
 */
Solute::Solute(string name, double density, double molar_mass)
{
    name = name;
    density = density;
    molar_mass = molar_mass;
    computeMolarity();
}
