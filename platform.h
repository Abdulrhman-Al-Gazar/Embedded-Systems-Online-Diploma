/*
 * platform.h
 *
 *  Created on: Jun 30, 2022
 *      Author: Abdulrhman S.Al-Gazar
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


#include <stdio.h>
#include <stdint.h>



typedef unsigned char          boolean;

typedef signed char            sint8;
typedef unsigned char          usint8;
typedef signed short           sint16;
typedef unsigned short         usint16;
typedef signed long            sint32;
typedef unsigned long          usint32;
typedef signed long long       sint64;
typedef unsigned long long     usint64;


typedef volatile unsigned char          vsint8;
typedef volatile unsigned char          vusint8;
typedef volatile signed short           vsint16;
typedef volatile unsigned short         vusint16;
typedef volatile signed long            vsint32;
typedef volatile unsigned long          vusint32;
typedef volatile signed long long       vsint64;
typedef volatile unsigned long long     vusint64;







#endif /* PLATFORM_TYPES_H_ */
