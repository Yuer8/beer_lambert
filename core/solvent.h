/*
 * ==============================================================================
 *
 *       Filename:  solvent.h
 *
 *    Description:  Solvent class.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 06:24:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */

#ifndef  SOLVENT_INC
#define  SOLVENT_INC

#include <string>
#include <boost/assert.hpp>
#include "globals.hpp"

/**
 * @brief Solvent class.
 */

using namespace std;
using namespace boost;

class Solvent
{
    public:
        Solvent()
        

        Solvent(string name, double density, double molar_mass)
        ~Solvent();

        /**
         * @brief Compute molarity of a given solution when density and
         * molar_mass is known.
         */
        void computeMolarity(void)
        {
            BOOST_ASSERT_MSG(density > 0.0, "Negative or zero density of solvent");
            BOOST_ASSERT_MSG(molar_mass > 0.0, "Negative or zero molar_mass of solvent");
            molariy = density / molar_mass;
        }

    public:
        string name;
        double density;
        double molar_mass;
        double molarity;

};

#endif   /* ----- #ifndef SOLVENT_INC  ----- */
