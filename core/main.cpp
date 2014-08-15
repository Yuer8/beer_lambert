/*
 * ==============================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Entry point of this program.
 *
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 06:01:48  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */


#include <iostream>
#include "globals.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    /* Logging  */
    google::InitGoogleLogging(argv[0]);
    FLAGS_logtostderr = 1;

    /* Initialize store house.
     * 
     * Create a bounding box with dimensions 1cm x 1cm x 1mm.
     */
    *pSolutionBox = *pSolutionBox + Bbox_3(0.0, 0.0, 0.0, 1e-2, 1e-2, 1e-3);
    LOG(INFO) << "Created solution box with zmin " 
        << (*pSolutionBox).zmin() << " zmax " << (*pSolutionBox).zmax()
        << endl;
    
}
