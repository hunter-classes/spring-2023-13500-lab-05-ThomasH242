#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
// add your tests here
TEST_CASE("test"){
    CHECK(isPrime(3));
    CHECK(nextPrime(3));
    CHECK(nextPrime(2));
    CHECK(countPrimes(5,31));
    CHECK(countPrimes(2,10));
    CHECK(isTwinPrime(3));
    CHECK(nextTwinPrime(3));
    CHECK(largestTwinPrime(5,18));
    CHECK(largestTwinPrime(14,16));
}
