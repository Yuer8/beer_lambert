/*
 * ==============================================================================
 *
 *       Filename:  molecules.h
 *
 *    Description:  Class for describing molecules.
 *
 *        Version:  1.0
 *        Created:  Saturday 16 August 2014 09:48:53  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawar@ee.iitb.ac.in
 *   Organization:  
 *
 * ==============================================================================
 */

#ifndef  MOLECULES_INC
#define  MOLECULES_INC

#include <CGAL/Point_3.h>
#include <CGAL/convex_hull_3.h>

using namespace CGAL;

class Molecule
{
    public:
        Molecule();
        ~Molecule();

    public:
        
        /**
         * @brief  Each molecule is represented as a polyhedra.
         */
        Polyhedron_3 moleculeGeom;

        /**
         * @brief If need arise, the molecule can be approximated as a sphere
         * with this radius.
         */
        Sphere_3 moleculeGeomApprox;

        double charge_;
};
#endif   /* ----- #ifndef MOLECULES_INC  ----- */
