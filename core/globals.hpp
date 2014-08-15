/*
 * ==============================================================================
 *
 *       Filename:  globals.hpp
 *
 *    Description:  Header file for global parameters.
 *
 *        Version:  1.0
 *        Created:  Friday 15 August 2014 06:23:17  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dilawar Singh (), dilawars@ncbs.res.in
 *   Organization:  
 *
 * ==============================================================================
 */

#ifndef  GLOBALS_INC
#define  GLOBALS_INC

#include <glog/logging.h>
#include <CGAL/Bbox_3.h>
#include <memory>

using namespace CGAL;
using namespace std;

extern unique_ptr<Bbox_3> pSolutionBox;

#endif   /* ----- #ifndef GLOBALS_INC  ----- */
