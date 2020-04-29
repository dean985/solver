#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <complex>
using namespace std;
using namespace solver;



TEST_CASE("Tests for realvarible class")
{
    ///// contain 50 checks
    
    RealVariable x;
    
// +    
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 2 ) == 0);
    CHECK( solve(3+x == 3 ) == 0);
    CHECK( solve(x+3 == 3 ) == 0);
    CHECK( solve(x+2+2 == 0 ) == -4);
    
    
// -
    CHECK( solve(x-2 == 0 ) == 2);
    CHECK( solve(2+2-x == 2 ) == 2);
    CHECK( solve(3-x == 3 ) == 0);
    CHECK( solve(2-x == 3 ) == -1);
    CHECK( solve(x-2-2 == 0 ) == 4);
    CHECK( solve(x-2+2 == 0 ) == 0);
    CHECK( solve(x-3+2 == 0 ) == 1);
    CHECK( solve(x+5 == 1-x ) == -2);


//------------------------------------------------
//*
    CHECK( solve(x*2 == 0 ) == 0);
    CHECK( solve(x*2 == 2 ) == 1);
    CHECK( solve(2*x == 2 ) == 1);
    CHECK( solve(5*x == 10 ) == 2);
    CHECK( solve(x*5 == -10 ) == -2);
    CHECK( solve(x*2*3 == 1 ) == (1/6));
    CHECK( solve(2 == x*2 ) == 1);
    
// ( / )
    // CHECK( solve(1/x == 1 ) == 1);
    // CHECK( solve(5/x == 1 ) == 5);
    // CHECK( solve(5/x == 5 ) == 1);
    // CHECK( solve(-5 == 5/x) == -1);
    // CHECK( solve(-6 == -6/x ) == 1);
    // CHECK( solve(x/2 == 2 ) == 4);
    // CHECK( solve(x/3 == -2 ) == -6);
    // CHECK( solve(-2 == x/-3 ) == 6);
     
//------------------------------------------------
// ^   
    // CHECK( solve(x^2 == 0 ) == 0);
    // CHECK( solve(x^2 == 4 ) == 2);
    // CHECK( solve(x^3 == 27 ) == 3);
    // CHECK( solve(x^(2+2) == 81 ) == 3);
    
    // CHECK( solve(2^x == 2 ) == 1);
    
    
    //CHECK( solve(x^2 == -1 ) == i);
    //CHECK( solve(x^2 == i ) == -1);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);


//------------------------------------------------
/// complicated
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);


   
//------------------------------------------------

    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);

   
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);

    
}


//TODO A constant expression in parenthesis and power of 2 ? Should it be allowed?
//     Then how to do it ?   ((x+2)^2)
//TODO What about the division operator? Is this legal 1/x  ? 1/2 ?
TEST_CASE("Tests for quadratic equations "){
      ComplexVariable x;
      CHECK(( solve((x ^ 2) == -4) == std::complex<double>(0, -2)) ||
            (solve((x ^ 2) == -4) == std::complex<double>(0, 2)));
      CHECK((solve((x ^ 2) + 9 == 0) == std::complex<double>(0, 3)) ||
            (solve((x ^ 2) + 9 == 0) == std::complex<double>(0, -3)));
      CHECK((solve((x ^ 2) + 4*x + 7 == 0) == std::complex<double>(-2, 1.7320508)) ||
            (solve((x ^ 2) + 4*x + 7 == 0) == std::complex<double>(-2, -1.7320508)));
      CHECK((solve(5 * (x ^ 2) + 6 * x + 3 == 0) == std::complex<double>(-0.6, 0.48989794)) ||
            (solve(5 * (x ^ 2) + 6 * x + 3 == 0) == std::complex<double>(-0.6, -0.48989794)));
      CHECK((solve(5 * (x ^ 2) - 8 * x + 5 == 0) == std::complex<double>(0.4, 0.6)) ||
            (solve(5 * (x ^ 2) - 8 * x + 5 == 0) == std::complex<double>(0.4, -0.6)));
      CHECK(solve(10 * (x ^ 2) - 11 * x + 9 == 13 * x - 6 * (x ^ 2)) == std::complex<double>(0.75, 0));
      CHECK((solve(0.25 * (x ^ 2) - 0.33333 * x + 1 == 0) == complex<double>(0.6666666, -1.88561808)) ||
            (solve(0.25 * (x ^ 2) - 0.33333 * x + 1 == 0) == complex<double>(0.6666666, -1.88561808)));
      CHECK((solve((x ^ 2) - 6 * x + 13 == 0) == complex<double>(3, 2)) ||
            (solve((x ^ 2) - 6 * x + 13 == 0) == complex<double>(3, -2)));
}
TEST_CASE("Linear equations"){
    ComplexVariable x;
    CHECK(solve(1i * x == 2 * x + 1i - 2) == std::complex<double>(1.0, 0));
    CHECK(solve(((2 * 1i - 1) ^ 2) - x == 1i + 5 * x) == std::complex<double>(-0.5, -1));
    CHECK(solve(-x + x - x + x - x == 1) == std::complex<double>(-1.0, 0));
    CHECK(solve(x + x + x + x + x == -1i + 5) == std::complex<double>(-0.2, 1.0));
    CHECK(solve(-1i + 2 * x + 7i == 6i) == std::complex<double>(0, 0));
    CHECK(solve(200 * x + 300 * x == 500 + 500i) == std::complex<double>(1.0, 1.0));
    CHECK(solve(10 - 10 - 200 + 5x == 800) == std::complex<double>(200.0, 0.0));
    CHECK(solve((1i ^ 2) + 1 == x - x) == std::complex<double>(0, 0));
    CHECK(solve(14i * x == 28i) == std::complex<double>(2.0, 0.0));
    CHECK(solve(15 - 10 * x == -5i) ==std::complex<double>(1.5,0.5) );
    CHECK(solve(7 * x + 14i == -28) == std::complex<double>(-4.0, -2.0));
    // CHECK(solve(4i - 8 == -2*x) == std::complex<double>(4.0, -2.0));
    // CHECK(solve(9i - 36 == -3*x) == std::complex<double>(4.0, -2.0));
    // CHECK(solve(4i - 8 == -2*x) == std::complex<double>(12.0, -3.0));
    // CHECK(solve(4i - 8 == -2*x) == std::complex<double>(4.0, -2.0));
    CHECK(solve(7.2 * x + 15.7i == 1.45) == std::complex<double>(0.20138888, -2.18055555));
    CHECK(solve(33 * x + 3i == 333) == std::complex<double>(10.090909, -0.09090909));
    CHECK(solve(2*x +3i +4 ==0) == std::complex<double>(-2.0, -1.5));
    CHECK(solve(5*x/2.5+7i-4 == 0)==std::complex<double>(4,-3.5));
}

TEST_CASE("Throwing events"){
    ComplexVariable x, y, z;
    
    // Divide by zero
    CHECK_THROWS(solve(x/0 == 0));
    CHECK_THROWS(solve(x/(5-5) == 1000));
    
    // Other 
    CHECK_THROWS(solve(5.0/1.0*x + 2.0*x == 0));
    CHECK_THROWS(solve(10/x == 0));
    CHECK_THROWS(solve(10*x - 10*x == 1 ));

    //Variable issues
    CHECK_THROWS(solve(x + y == 0));
    CHECK_THROWS(solve(x + y + z == 2));
    CHECK_THROWS(solve(x == x + y));
    CHECK_THROWS(solve(x*x*x == 0));

    //Power issues
    CHECK_THROWS(solve((x^3) == 15));
    // CHECK_THROWS(solve((x^1/8) == 543));
    // CHECK_THROWS(solve((x^4/12) == 98));
    // CHECK_THROWS(solve((x^3/5) == 55));
    CHECK_THROWS(solve((x^19) == 44));
    CHECK_THROWS(solve((x^22) == 987));
    CHECK_THROWS(solve((x^31) == 0));
    // CHECK_THROWS(solve((x^2/6) == 5));
    CHECK_THROWS(solve((x^9) == 72));


    //Exponent issues
    CHECK_THROWS(solve((x ^ 3) == 2));
    CHECK_THROWS(solve(2 + x * x * x == 0));
    CHECK_THROWS(solve(2 + x + 4 == (x ^ 5)));
    CHECK_THROWS(solve(2 + x + 4 == (x ^ -3)));
    CHECK_THROWS(solve(2 + x + 4 == x ^ 2));
    CHECK_THROWS(solve(2 + x + 4 == x ^ 9));
    

}