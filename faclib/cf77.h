#ifndef _CF77_H_
#define _CF77_H_ 1

#include "sysdef.h"
#include "cfortran.h"

     /* dirac coulomb function */
     PROTOCCALLSFSUB9(DCOUL, dcoul, DOUBLE, DOUBLE, INT, DOUBLE, DOUBLEV,\
		      DOUBLEV, DOUBLEV, DOUBLEV, INTV)
#define DCOUL(A1,A2,A3,A4,A5,A6,A7,A8,A9)				\
     CCALLSFSUB9(DCOUL, dcoul, DOUBLE, DOUBLE, INT, DOUBLE, DOUBLEV,\
		 DOUBLEV, DOUBLEV, DOUBLEV, INTV,\
                 A1,A2,A3,A4,A5,A6,A7,A8,A9)

     /* coulomb multipole matrix elements */
     PROTOCCALLSFSUB11(CMULTIP, cmultip, DOUBLE, DOUBLE, DOUBLE, DOUBLE, DOUBLE,\
		       INT, INT, INT, DOUBLEV, INT, INTV)
#define CMULTIP(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11)			  \
     CCALLSFSUB11(CMULTIP, cmultip, DOUBLE, DOUBLE, DOUBLE, DOUBLE, DOUBLE,\
		  INT, INT, INT, DOUBLEV, INT, INTV,			\
		  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11)

     PROTOCCALLSFSUB7(ACOFZ1, acofz1, DOUBLE, DOUBLE, INT, INT,\
		      DOUBLEV, INT, INT)
#define ACOFZ1(A1,A2,A3,A4,A5,A7,A8)\
     CCALLSFSUB7(ACOFZ1, acofz1, DOUBLE, DOUBLE, INT, INT,\
		 DOUBLEV, INT, INT, A1,A2,A3,A4,A5,A7,A8)

     PROTOCCALLSFSUB12(PIXZ1, pixz1, DOUBLE, DOUBLE, INT, INT,\
		       DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV, INT,\
		       INT, INT, INT)
#define PIXZ1(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)\
     CCALLSFSUB12(PIXZ1, pixz1, DOUBLE, DOUBLE, INT, INT,\
		  DOUBLEV, DOUBLEV, DOUBLEV, DOUBLEV, INT,\
		  INT, INT, INT, A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)

#endif
