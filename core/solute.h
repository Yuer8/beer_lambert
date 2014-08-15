/*
 * ==============================================================================
 *
 *       Filename:  solute.h
 *
 *    Description:  Solute class.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 07:00:46  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */

#ifndef  SOLUTE_INC
#define  SOLUTE_INC

#include "solvent.h"

/**
 * @brief Class for solute.
 */
class Solute : public Solvent
{
    public:
        Solute(string name, double density, double molar_mass);
        ~Solute();

    public:
        string name;
        double density;
        double molar_mass;
        double molarity;
};

#endif   /* ----- #ifndef SOLUTE_INC  ----- */
