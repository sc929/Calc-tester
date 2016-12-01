#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
	double a = 3;
	int b = 4;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 7.0 );
}
SCENARIO("calculator sub", "[sub]") {
	double a = 9.0;
	int b = 1;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator mult", "[mult]") {
	double a = 9.0;
	int b = 1;
    
    double rv = mult( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator div", "[div]") {
	double a = 9.0;
	int b = 1;
    
    double rv = div( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator pow", "[pow]") {
	double a = 9.0;
	int b = 1;
    
    double rv = pow( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator squar", "[squar]") {
	double a = 9.0;
    
    double rv = squar( a);
    
	REQUIRE( rv == 3.0 );
}
