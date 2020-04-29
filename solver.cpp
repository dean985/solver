#include <iostream>
#include "solver.hpp"
#include <complex>
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
    
    
    // const RealVariable operator/(RealVariable r)
    // {
    //     return RealVariable();
    // }
    // const RealVariable operator/(RealVariable r1,RealVariable r2)
    // {
    //     return RealVariable();
    // }

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
    const ComplexVariable& operator+(const ComplexVariable& c1, const ComplexVariable& c2){
        return c2;
    }
    const ComplexVariable& operator+(const double num, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator+(const ComplexVariable& c, const double num){
        return c;
    }
    const ComplexVariable& operator+(const complex<double>& complex, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator+(const ComplexVariable& c, const complex<double>& complex){
        return c;
    }

    const ComplexVariable& operator-(const ComplexVariable& c1, const ComplexVariable& c2){
        return c1;
    }
    const ComplexVariable& operator-(const double num, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator-(const ComplexVariable& c, const double num){
        return c;
    }
    const ComplexVariable& operator-(const complex<double>& complex, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator-(const ComplexVariable& c, const complex<double>& complex){
        return c;
    }

    const ComplexVariable& operator*(const ComplexVariable& c1, const ComplexVariable& c2){
        return c1;
    }
    const ComplexVariable& operator*(const double num, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator*(const ComplexVariable& c, const double num){
        return c;
    }
    const ComplexVariable& operator*(const complex<double>& complex, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator*(const ComplexVariable& c, const complex<double>& complex){
        return c;
    }

    const ComplexVariable& operator/(const ComplexVariable& c1, const ComplexVariable& c2){
        return c1;
    }
    const ComplexVariable& operator/(const double num, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator/(const ComplexVariable& c, const double num){
        return c;
    }
    const ComplexVariable& operator/(const complex<double>& complex, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator/(const ComplexVariable& c, const complex<double>& complex){
        return c;
    }

    const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2){
        return c1;
    }
    const ComplexVariable& operator==(const double num, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator==(const ComplexVariable& c, const double num){
        return c;
    }
    const ComplexVariable& operator==(const complex<double>& complex, const ComplexVariable& c){
        return c;
    }
    const ComplexVariable& operator==(const ComplexVariable& c, const complex<double>& complex){
        return c;
    }

    const ComplexVariable& operator^(const ComplexVariable& c, const double num){
        return c;
    }

    ostream& operator<<(ostream& os, const ComplexVariable& c){
        return os;
    }



    complex<double> solve(const ComplexVariable& var) {
        return 0;
    }
}