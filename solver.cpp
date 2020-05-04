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
    const RealVariable operator+(const RealVariable& r1,const RealVariable& r2)
    {
        return RealVariable(r1.n+r2.n );
    }

    
    const RealVariable operator*(RealVariable r1,RealVariable r2)
    {
        return RealVariable(r1.n*r2.n);
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
    const ComplexVariable& operator+(const ComplexVariable& c1, const ComplexVariable& c2){
        ComplexVariable *ans = new ComplexVariable(c1);
        ans->_c1 += c2._c1;
        ans->_c2 += c2._c2;
        ans->_c3 += c2._c3;

        return *ans;
    }
    const ComplexVariable& operator+(const double num, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 += num;
        return *ans;
    }
    const ComplexVariable& operator+(const ComplexVariable& c, const double num){
        return (num+c);
    }
    const ComplexVariable& operator+(const complex<double>& complex, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 += complex;

        return *ans;
    }
    const ComplexVariable& operator+(const ComplexVariable& c, const complex<double>& complex){
        return (complex+c);
    }

    const ComplexVariable& operator-(const ComplexVariable& c1, const ComplexVariable& c2){
        ComplexVariable *ans = new ComplexVariable(c1);
        ans->_c1 -= c2._c1;
        ans->_c2 -= c2._c2;
        ans->_c3 -= c2._c3;

        return *ans;
    }
    const ComplexVariable& operator-(const double num, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 -= num;
        
        return *ans;
    }
    const ComplexVariable& operator-(const ComplexVariable& c, const double num){
        return num-c;
    }
    const ComplexVariable& operator-(const complex<double>& complex, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 -= complex;

        return *ans;
    }
    const ComplexVariable& operator-(const ComplexVariable& c, const complex<double>& complex){
        return complex-c;
    }
    //TODO Is this one really needed? If yes, need to check that the result's power is not more then 2
    const ComplexVariable& operator*(const ComplexVariable& c1, const ComplexVariable& c2){
        ComplexVariable *ans = new ComplexVariable(c1);
        ans->_c1 *= c2._c1;
        ans->_c2 *= c2._c2;
        ans->_c3 *= c2._c3;

        return *ans;
    }
    const ComplexVariable& operator*(const double num, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 *= num;
        ans->_c2 *= num;
        ans->_c3 *= num;

        return *ans;
    }
    const ComplexVariable& operator*(const ComplexVariable& c, const double num){
        return num*c;
    }
    const ComplexVariable& operator*(const complex<double>& complex, const ComplexVariable& c){
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c1 *= complex;
        ans->_c2 *= complex;
        ans->_c3 *= complex;

        return *ans;
    }
    const ComplexVariable& operator*(const ComplexVariable& c, const complex<double>& complex){
        return complex*c;
    }

    // const ComplexVariable& operator/(const ComplexVariable& c1, const ComplexVariable& c2){
    //     if ()
    // }
    // const ComplexVariable& operator/(const double num, const ComplexVariable& c){
       
    // }
    const ComplexVariable& operator/(const ComplexVariable& c, const double num){
        if (num == 0)
            throw runtime_error("Division by Zero");
        ComplexVariable *ans = new ComplexVariable(c);
        ans->_c2 /= num;

        return *ans;
    }
    // const ComplexVariable& operator/(const complex<double>& complex, const ComplexVariable& c){
    //     return c;
    // }
    // const ComplexVariable& operator/(const ComplexVariable& c, const complex<double>& complex){
    //     return c;
    // }
    //TODO Might not work. Maybe should be defined explicitly
    const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2){
        return c1 - c2;
    }
    const ComplexVariable& operator==(const double num, const ComplexVariable& c){
        return num - c;
    }
    const ComplexVariable& operator==(const ComplexVariable& c, const double num){
        return c - num;
    }
    const ComplexVariable& operator==(const complex<double>& complex, const ComplexVariable& c){
        return complex - c;
    }
    const ComplexVariable& operator==(const ComplexVariable& c, const complex<double>& complex){
        return c - complex;
    }

    const ComplexVariable& operator^(const ComplexVariable& c, const int num){
        if(num >2 || num < 0)
            throw runtime_error("Power is illegal" + to_string(num));
        if(num == 1)
            return c;
        if(num == 0){
            ComplexVariable *ans = new ComplexVariable;
            ans->_c1 += 1;
            ans->_c2 = 0;
            return *ans;
        }

        //Case power is two
        ComplexVariable *ans = new ComplexVariable;
        ans->_c2 = 0;
        ans->_c3 = ans->_c3 + 1.0;

        return *ans;
    }

    ostream& operator<<(ostream& os, const ComplexVariable& c){
        std::cout << c._c1 << ", " << c._c2 << ", " << c._c3 << std::endl;
        return os;
    }



    complex<double> solve(const ComplexVariable& var) {
        complex<double> M_one(-1.0);
        complex<double> TWO(2.0);
        complex<double> ZERO(0);
        if(var._c3 == complex<double>(0)){
            if(var._c2 == ZERO)
                throw runtime_error("Infinity solutions");
            
            return M_one*var._c1 / var._c2;
        }

        complex<double> discriminant = pow(var._c2, 2) - complex<double>(4) * var._c3 * var._c1;

        return (M_one * var._c2 + sqrt(discriminant)) / (TWO * var._c3);
    }
}