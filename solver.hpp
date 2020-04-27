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


namespace solver{
    class RealVariable{
        private double n;
        
        RealVariable()
        {
            this.n = 1;
        }

    };
    
    int get_n()
    {
        return this.n;
    }
    
    const RealVariable operator+(double x, RealVariable r)
    {
        return RealVariable(x + r.get_n());
    }
    

    class ComplexVariable{
    };

    class solve{
    };
}