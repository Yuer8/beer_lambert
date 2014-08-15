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

#include "solvent.h"
#include <boost/assert.hpp>
#include "globals.hpp"
#include <glog/logging.h>

Solvent::Solvent()
{
    LOG(WARNING) << "Info: Using water as default solvent" << endl;
    name = "water";
    density = 997.0479;
    molar_mass = 18.02;
    computeMolarity();
}

Solvent::Solvent(string name, double density, double molar_mass)
{
    name = name;
    density = density;
    molar_mass = molar_mass;
    computeMolarity();
}

void Solvent::computeMolarity()
{
    BOOST_ASSERT_MSG(density > 0.0, "Negative or zero density of solvent");
    BOOST_ASSERT_MSG(molar_mass > 0.0, "Negative or zero molar_mass of solvent");
    molarity = density / molar_mass;
}
