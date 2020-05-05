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

     RealVariable operator+(RealVariable& r1,const double& x)
    {
        r1.c = r1.c + x;
        return r1;
    }
     RealVariable operator+(const double& x,RealVariable& r1)
    {
        return r1+x;
    }
    
     RealVariable operator+(const RealVariable& r1,const RealVariable& r2)
    {
        return RealVariable(r1.a + r2.a ,r1.b + r2.b,r1.c + r2.c);
    }


     RealVariable operator*(RealVariable& r1,double r)
    {
        r1.b += r;
        return r1;
    }
     RealVariable operator*(double r,RealVariable& r1)
    {
        r1.b += r;
        return r1;
    }


     RealVariable operator-(double x, RealVariable r1)
    {
        r1.c -= x;
        return r1;
    }
     RealVariable operator-(RealVariable r, double x)
    {
        return x-r;    
    }
     RealVariable operator-(RealVariable r1,RealVariable r2)
    {
        r1.a -= r2.a;
        r1.b -= r2.b;
        r1.c -= r2.c;

        return r1;  
    }
    
    
    // const RealVariable operator/(double x, RealVariable r)
    // {
    //     return RealVariable(x/r.n);
    // }
    // const RealVariable operator/(RealVariable r, double x)
    // {
    //     return RealVariable(r.n/x);
    // }

    // const RealVariable operator/(RealVariable r1,RealVariable r2)
    // {
    //     return RealVariable(r1.n/r2.n);
    // }

     RealVariable operator==(const RealVariable& r1,const RealVariable& r2)
    {
        return r1-r2;

    }
    
     RealVariable operator==(const RealVariable& r1,const double& r2)
    {

        return r1-r2;
    }

     RealVariable operator^(RealVariable r1,int i)
    {
        if(i == 2 && r1.a == 0)
        {
            r1.a += 1;
        }
        if(i == 1 && r1.b == 0)
        {

            r1.b += 1;
        }
        else
        {
         //   throw exception();
        }
        return r1;

    }

    ostream& operator<< (ostream& os, const RealVariable& r) {
        return (os <<" a = " <<(r.a) << " b = "<<r.b << " c = "<<r.c);
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