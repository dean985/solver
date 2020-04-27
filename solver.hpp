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
    };

    class ComplexVariable{
        complex<double> c1;
        complex<double> c2;
        complex<double> c3;

    public:
    ComplexVariable() : c1(0), c2(1.0), c3(0) {}

    ComplexVariable(const complex<double> a1, const complex<double> a2, const complex<double> a3){
      c1 = complex(a1); c2 = complex(a2); c3 = complex(a3);
    }
    //Getters
    //TODO: Is there a need for getters ?
//    const complex<double>& get_c1() const{
//      return c1;
//    }
//    const complex<double>& get_c2() const{
//      return c2;
//    }
//    const complex<double>& get_c3() const{
//      return c3;
//    }

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
    friend ComplexVariable operator==(const complex<double> c,const ComplexVariable& c_var);
    friend ComplexVariable operator==(const ComplexVariable& c_var, const complex<double> c);

    //Operator for nagative ComplexVariable
    ComplexVariable operator -();
    
    };

}
