/***********************************************************************
 * Source File:
 *    ANGLE
 * Author:
 *    <your name here>
 * Summary:
 *    Everything we need to know about a direction
 ************************************************************************/

#include "angle.h"
#include <math.h>  // for floor()
#include <cassert>
using namespace std;

/************************************
 * ANGLE : NORMALIZE
 ************************************/
double Angle::normalize(double radians) const
{
   if (radians >= 2.0 * M_PI)
   {
      double multiples = floor(radians / (M_PI * 2.0));
      return radians - ((M_PI * 2.0) * multiples);
   }

   else if (radians < 0.0)
   {
      double multiples = ceil(-radians / (M_PI * 2.0));
      return (M_PI * 2.0) * multiples + radians;
   }

   return  radians;
}






