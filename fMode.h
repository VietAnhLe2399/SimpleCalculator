#ifndef FMODE_H_INCLUDED
#define FMODE_H_INCLUDED

#include <math.h>

#define PI 3.14159265
#define val PI/180

double calsin(double x){
    return sin(x*val);
}

double calcos(double x){
    return cos(x*val);
}

double caltan(double x){
    return calsin(x)/calcos(x);
}

double calcot(double x){
    return 1/caltan(x);
}

#endif // FMODE_H_INCLUDED
