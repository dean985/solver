/**
 * solving single variable equation 
 * Either linear or quadratic equations.
 * 
 * Domain and range are complex and real numbers.
 * 
 * if there is more then one solution- return one of them randomly 
 * for tests - (7 == 7.0) is True. 
 * 
 * Throw Exceptions:
 * More then one variable
 * Inequality 
 * Exponent higher than two
 * No solution for given equation
 */
#include <complex>
#include <iostream>
using namespace std;
namespace solver{

    class RealVariable {
        
        
        public:
            double a, b, c;

        RealVariable()
        {
            a = 0;
            b = 1;
            c = 0;
        }
        RealVariable(double _a,double _b,double _c)
        {
            a = _a;
            b = _b;
            c = _c;
        }
        RealVariable(RealVariable& r)
        {
            a = r.a;
            b = r.b;
            c = r.c;
        }

        

    
    
    friend const RealVariable operator+(const double& x,const RealVariable& r);
    friend const RealVariable operator+(const RealVariable& r,const double& x);
    friend const RealVariable operator+(const RealVariable& r1,const RealVariable& r2);

    friend  RealVariable operator-(const double x,const RealVariable& r);
    friend  RealVariable operator-(const RealVariable& r,const double x);
    friend  RealVariable operator-(const RealVariable& r1,const RealVariable& r2);

    friend const RealVariable operator*(const double& x,const RealVariable& r);
    friend const RealVariable operator*(const RealVariable& r,const double& x);
    //friend const RealVariable operator*(const RealVariable& r1,const RealVariable& r2);
    

 //   friend  RealVariable operator/(double x, RealVariable r);
     friend const RealVariable operator/(RealVariable r, double x);
    // friend  RealVariable operator/(const RealVariable r1,RealVariable r2);

    //friend const RealVariable operator/(const RealVariable r);   
    
    
    friend  RealVariable operator == (const RealVariable& r1,const RealVariable& r2);
    friend  RealVariable operator == (const RealVariable& r1,const double& r2);


    friend const RealVariable operator^(RealVariable r1,int i);
    friend ostream& operator<< (ostream& os, const RealVariable& r);


    };
    
   
    class ComplexVariable{
            public:
            std::complex<double> _c1,_c2,_c3;
            ComplexVariable() : _c1(0),
                                _c2(1),
                                _c3(0){};

            ComplexVariable(complex<double> c1, complex<double> c2, complex<double> c3) {
                _c1 = c1;
                _c2 = c2;
                _c3 = c3;
            }

            friend const ComplexVariable& operator+(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator+(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator+(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator+(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator+(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator-(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator-(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator-(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator-(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator-(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator*(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator*(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator*(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator*(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator*(const complex<double>& complex, const ComplexVariable& c);

            // friend const ComplexVariable& operator/(const ComplexVariable& c1, const ComplexVariable& c2);
            // friend const ComplexVariable& operator/(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator/(const ComplexVariable& c, const double num);
            // friend const ComplexVariable& operator/(const ComplexVariable& c, const complex<double>& complex);
            // friend const ComplexVariable& operator/(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator==(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator==(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator==(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator==(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator^(const ComplexVariable& c, const int num);

            friend ostream& operator<<(ostream& os, const ComplexVariable& c);

        };



    complex<double> solve(const ComplexVariable& a);
    double solve(RealVariable var);

/**
 * 
 * operators for both Real and complex
 * 
 * */
 
  const RealVariable operator+(ComplexVariable c,RealVariable r);
  const RealVariable operator-(ComplexVariable c,RealVariable r);
  const RealVariable operator*(ComplexVariable c,RealVariable r);
  const RealVariable operator/(ComplexVariable c,RealVariable r);

}


