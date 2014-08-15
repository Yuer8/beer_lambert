/*
 * ==============================================================================
 *
 *       Filename:  solvent.cpp
 *
 *    Description:  Solvent class.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 06:38:50  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */

#include "solvent.hpp"

void Solvent::Solvent()
{
    cerr << "Info: Using water as default solvent" << endl;
    name = "water";
    density = 997.0479;
    molar_mass = 18.02;
    computeMolarity();
}

void Solvent::Solven(string name, double density, double molar_mass)
{
    name = name;
    density = density;
    molar_mass = molar_mass;
    computeMolarity();
}

