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
        
        private: double n;
        
        public:
        RealVariable()
        {
            n = 1;
        }
        RealVariable(double x)
        {
            n = x;
        }

    
    
    friend const RealVariable operator+(const double& x,const RealVariable& r);
    friend const RealVariable operator+(const RealVariable& r,const double& x);

    friend const RealVariable operator-(double x, RealVariable r);
    friend const RealVariable operator-(RealVariable r, double x);
    friend const RealVariable operator-(RealVariable r1,RealVariable r2);

    // friend const RealVariable operator*(double x, RealVariable r);
    // friend const RealVariable operator*(RealVariable r, double x);
    // friend const RealVariable operator*(int x, RealVariable r);
    friend const RealVariable operator*(RealVariable r);   
    friend const RealVariable operator*(RealVariable r1,RealVariable r2);
    

    // friend const RealVariable operator/(double x, RealVariable r);
    // friend const RealVariable operator/(RealVariable r, double x);
    // friend const RealVariable operator/(int x, RealVariable r);
    
    //friend const RealVariable operator/(const RealVariable r);   
    //friend const RealVariable operator/(const RealVariable r1,RealVariable r2);
    
    
    friend const RealVariable operator == (const RealVariable& r1,const RealVariable& r2);
    friend const RealVariable operator == (const RealVariable& r1,const double& r2);


    friend const RealVariable operator^(RealVariable r1,int i);
    friend ostream& operator<< (ostream& os, const RealVariable& r);


    };
    
   
    class ComplexVariable{
        private:
        std::complex<double> c;
        

        public:
            ComplexVariable(): c(1,0) {};

            ComplexVariable(double x, double i): c(x,i){}

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

            friend const ComplexVariable& operator/(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator/(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator/(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator/(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator/(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator==(const ComplexVariable& c1, const ComplexVariable& c2);
            friend const ComplexVariable& operator==(const double num, const ComplexVariable& c);
            friend const ComplexVariable& operator==(const ComplexVariable& c, const double num);
            friend const ComplexVariable& operator==(const ComplexVariable& c, const complex<double>& complex);
            friend const ComplexVariable& operator==(const complex<double>& complex, const ComplexVariable& c);

            friend const ComplexVariable& operator^(const ComplexVariable& c, const double num);

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


