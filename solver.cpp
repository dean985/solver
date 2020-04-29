#include <iostream>
#include "solver.hpp"

using namespace std;
namespace solver{


double solve(const RealVariable x ) {return 1.1;}


/*
 *Real Varible func implementetion 
 *
 */

    const RealVariable operator+(const RealVariable& r1,const double& x)
    {
        return RealVariable((r1.n)+x-1);
    }
    const RealVariable operator+(const double& x,const RealVariable& r1)
    {
        return RealVariable((r1.n)+x-1);
    }
    
    const RealVariable operator+(const RealVariable& r1,const RealVariable& r2)
    {
        return RealVariable();
    }

    
    const RealVariable operator*(RealVariable r1,RealVariable r2)
    {
        return RealVariable();

    }
    const RealVariable operator*(RealVariable r)
    {
        return RealVariable();
    }

    const RealVariable operator-(double x, RealVariable r)
    {
        return RealVariable();
    }
    const RealVariable operator-(RealVariable r, double x)
    {
        return RealVariable();    
    }
    const RealVariable operator-(RealVariable r1,RealVariable r2)
    {
        return RealVariable();    
    }
    
    
    const RealVariable operator/(double x, RealVariable r)
    {
        return RealVariable();
    }
    const RealVariable operator/(RealVariable r, double x)
    {
        return RealVariable();
    }

    const RealVariable operator/(RealVariable r1,RealVariable r2)
    {
        return RealVariable();
    }

    const RealVariable operator==(const RealVariable& r1,const RealVariable& r2)
    {
        return RealVariable();

    }
    
    const RealVariable operator==(const RealVariable& r1,const double& r2)
    {
        return RealVariable();
    }

    const RealVariable operator^(RealVariable r1,int i)
    {
        return RealVariable();

    }

    ostream& operator<< (ostream& os, const RealVariable& r) {
        return (os << (r.n));
    // equivalent to:
    // os << c._re << '+' << c._im << 'i';
    // return os;
    }


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