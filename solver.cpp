#include <iostream>
#include "solver.hpp"

using namespace std;
namespace solver{


double solve(RealVariable& ) {return 1.1;}

/**
 * Complex variable memeber function implementation
 */


    ComplexVariable operator+(const ComplexVariable& var, const complex<double>& c){
        return ComplexVariable();
    }
    ComplexVariable operator+(const complex<double>& c, const ComplexVariable& var){
        return ComplexVariable();
    }
    ComplexVariable operator+(const ComplexVariable& a, const ComplexVariable& b){
        return ComplexVariable();
    }

    ComplexVariable operator-(const ComplexVariable& var, const complex<double>& c){
        return ComplexVariable();
    }
    ComplexVariable operator-(const complex<double>& c ,const ComplexVariable& var){
        return ComplexVariable();
    }
    ComplexVariable operator-(const ComplexVariable& a,const ComplexVariable& b){
        return ComplexVariable();
    }

    ComplexVariable operator*(const ComplexVariable& var, const complex<double>& c){
        return ComplexVariable();
    }
    ComplexVariable operator*(const complex<double>& c ,const ComplexVariable& var){
        return ComplexVariable();
    }
    ComplexVariable operator*(const ComplexVariable& a,const ComplexVariable& b){
        return ComplexVariable();
    }

    ComplexVariable operator/(const ComplexVariable& var, const complex<double> c){
        return ComplexVariable();
    }
    ComplexVariable operator/(const ComplexVariable& a, const ComplexVariable& b){
        return ComplexVariable();
    }

    ComplexVariable operator^(const ComplexVariable& var, const complex<double> c){
        return ComplexVariable();
    }

    ComplexVariable operator==(const ComplexVariable& a,const ComplexVariable& b){
        return ComplexVariable();
    }

double solve(ComplexVariable& ) {return 1.1;}
}