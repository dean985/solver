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
using namespace std;
namespace solver{

    class RealVariable {
        
        private double n;
        
        int get_n()
        {
            return this.n;
        }
    
        const RealVariable operator+(double x, RealVariable r)
        {
            return RealVariable(x + r.get_n());
        }
    


    };
    
   
    class ComplexVariable{
        complex<double> c;
        

        public:
        ComplexVariable() {}

        // ComplexVariable(const complex<double> a1)
        //Operator overloading
        friend ComplexVariable operator+(const ComplexVariable& var, const complex<double>& c);
        friend ComplexVariable operator+(const complex<double>& c, const ComplexVariable& var);
        friend ComplexVariable operator+(const ComplexVariable& a, const ComplexVariable& b);

        friend ComplexVariable operator-(const ComplexVariable& var, const complex<double>& c);
        friend ComplexVariable operator-(const complex<double>& c ,const ComplexVariable& var);
        friend ComplexVariable operator-(const ComplexVariable& a,const ComplexVariable& b);

        friend ComplexVariable operator*(const ComplexVariable& var, const complex<double>& c);
        friend ComplexVariable operator*(const complex<double>& c ,const ComplexVariable& var);
        friend ComplexVariable operator*(const ComplexVariable& a,const ComplexVariable& b);

        friend ComplexVariable operator/(const ComplexVariable& var, const complex<double> c);
        friend ComplexVariable operator/(const ComplexVariable& a, const ComplexVariable& b);

        friend ComplexVariable operator^(const ComplexVariable& var, const complex<double> c);

        //ComplexVariable operator- () const;

        friend ComplexVariable operator==(const ComplexVariable& a,const ComplexVariable& b);
        //TODO: if it's possible to cast any complex number to ComplexVariable, those aren't needed?
        // friend ComplexVariable operator==(const complex<double> c,const ComplexVariable& c_var);
        // friend ComplexVariable operator==(const ComplexVariable& c_var, const complex<double> c);

        };


    double solve(ComplexVariable& var );
    double solve(RealVariable& var);
}
