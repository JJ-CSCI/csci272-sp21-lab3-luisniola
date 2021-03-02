//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here
#include <iostream>


class Quaternion {
  
  double a;
  double b;
  double c;
  double d;
  public:
  Quaternion(double e, double f, double g, double h )
  {
    a=e;
    b=f;
    c=g;
    d=h;
  }
   bool operator== (const Quaternion &e)const
   {
    if ((e.a == this-> a) && (e.b == this-> b) && (e.c == this-> c) && (e.d == this-> d))
    return true;

    else
    return false;

  }

  Quaternion operator+(const Quaternion &e){
    Quaternion result(a+e.a,b+e.b,c+e.c,d+e.d);
    return result;
  

  }

  Quaternion operator-(const Quaternion &e){
    Quaternion result(a-e.a, b-e.b, c-e.c, d-e.d);
    return result;
    
  }
  Quaternion operator*(double h){
    Quaternion result(a*h,b*h,c*h,d*h);
    return result;
  
  }
 
   

};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
