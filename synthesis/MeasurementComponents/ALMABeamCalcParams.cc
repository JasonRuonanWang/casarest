#include <synthesis/MeasurementComponents/BeamCalc.h>
#include <synthesis/MeasurementComponents/ALMABeamCalc.h>

namespace casa{
  struct BeamCalcGeometry ALMABeamCalcGeometryDefaults[ALMABeamCalc_NumBandCodes] = 
    {
      /* Format of each entry:
	 
      struct BeamCalcGeometry	all dimensions in meters, GHz 
      {
      char name[16];		name of antenna, e.g., VLA 
      Double sub_h;		subreflector vertex height above primary vertex 
      Double feedpos[3];		position of feed 
      Double subangle;		angle subtended by the subreflector 
      Double legwidth;		strut width 
      Double legfoot;		distance from optic axis of leg foot 
      Double legapex;		hight of leg intersection 
      Double Rhole;		radius of central hole 
      Double Rant;		antenna radius 
      Double reffreq;		a reference frequency 
      Double taperpoly[5];	polynomial expanded about reffreq 
      Int ntaperpoly;		number of terms in polynomial 
      */

      /* BeamCalc_ALMA_1 */
      {
	"ALMA",
	4.623, // distance surface subreflector to surface of primary reflector
	{0.0,0.0,-1.377}, // feed position (m), assume centered
	9.29, // angular diameter (deg) of subreflector from 4.623 m distance
	0.09, // leg width (m) 
	5.00, // dist. opt. axis to leg foot (m) APPROXIMATE! T.B.C. 
	5.14, // height of leg intersection (m) APPROXIMATE! T.B.C. 
	0.375, // radius of central hole (m)
	6.0, // antenna radius
	31.3, // ref. freq (GHz), lower band edge
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 // T.B.C.
      },
      /* BeamCalc_ALMA_2 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	67.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_3 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	84.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_4 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	125.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_5 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	163.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_6 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	211.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_7 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	275.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_8 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	385.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_9 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	602.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      },
      /* BeamCalc_ALMA_10 */
      {
	"ALMA",
	4.623, 
	{0.0,0.0,-1.377}, 
	9.29, 
	0.09, 5.00, 5.14, 
	0.375,
	6.0, 
	787.0,
	{6.5, 0.0, 0.0, 0.0, 0.0}, 1 
      }
    };
};
