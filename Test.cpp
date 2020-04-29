#include "doctest.h"
#include "solver.hpp"
#include <string>
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
    CHECK( solve(1/x == 1 ) == 1);
    CHECK( solve(5/x == 1 ) == 5);
    CHECK( solve(5/x == 5 ) == 1);
    CHECK( solve(-5 == 5/x) == -1);
    CHECK( solve(-6 == -6/x ) == 1);
    CHECK( solve(x/2 == 2 ) == 4);
    CHECK( solve(x/3 == -2 ) == -6);
    CHECK( solve(-2 == x/-3 ) == 6);
     
//------------------------------------------------
// ^   
    CHECK( solve((x^2) == 0 ) == 0);
    CHECK( solve((x^2) == 4 ) == 2);
    CHECK( solve((x^3) == 27 ) == 3);
    CHECK( solve( 81 ==  (x^(4+4))) == 3);
    
    CHECK( ((solve( ((x+2)^2) == 2 ) == -0.58578) || (solve( ((x+2)^2) == 2 ) == 3.41421)));
    
    

    CHECK(( (solve( 2 == (x^2) ) == 1.41421) || (solve( 2 == (x^2) ) == -1.41421)));
    CHECK( solve( (x^5) == -243 ) == -3);


 //-----------special ----------------------
//  complicated


    CHECK( ( (solve( (x^2) + x+2 == 2) == 0) || (solve((x^2)+x+2 == 2) == -1)));


    CHECK(( (solve((x^2)+4*x==12 ) == 2) || (solve((x^2)+4*x==12 ) == -6) ));
    CHECK(((solve((x^3)+3*(x^2)-4*x-12==0) == -3) || (solve((x^3)+3*(x^2)-4*x-12==0) == -2) || (solve((x^3)+3*(x^2)-4*x-12==0) == 2) ));
    CHECK(( (solve((x^2)-x-6 == 0 ) == 3) || (solve((x^2)-x-6 == 0) == -2) ));
    CHECK(((solve((x^(2+2))-5*(x^2)+4 == 0) == -2) || (solve((x^(2+2))-5*(x^2)+4 == 0) == 2) || (solve((x^(2+2))-5*(x^2)+4 == 0) == -1) || (solve((x^(2+2))-5*(x^2)+4 == 0) == 1) ));
    
///--------- RealVarible and  Comlex --------------    

    //CHECK( (solve((x^2)+2*x+4=0 ) == -1 + 1.7320i) || (solve((x^2)+2*x+4=0 ) == -1 - 1.7320i));
    //CHECK( solve(x^2 == -1 ) == i);
    //CHECK( solve(x^2 == i ) == -1);
    CHECK( ((solve(((x^2)+1)^2) == 0 ) == -i) || (solve(((x^2)+1)^2) == 0 ) == i)));
    
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);
    CHECK( solve(x+2 == 0 ) == -2);

    
}