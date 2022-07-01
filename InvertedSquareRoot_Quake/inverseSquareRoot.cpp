#include <iostream>

using namespace std;

float Qrsqrt( float number )
{
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = * ( long * ) &y;
    i = 0x5f3759df - ( i >> 1 );
    y = * ( float * ) &i;
    y = y * ( threehalfs - (x2 * y * y) );
    y = y * ( threehalfs - (x2 * y * y) ); // unnececery in most situations

    return y;

}
int main() {
    float n = 100;

    cout << Qrsqrt(n);

    
}