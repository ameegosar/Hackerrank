#include <iostream>
#include "Fraction.h"
#include<string>
#include <cstdlib>
using namespace std;


int main(int argc, char* argv[])
{
    int n1 = atoi(argv[1]);
    int d1 = atoi(argv[2]);
    cout<<n1<<endl;
    cout<<d1<<endl;
    Fraction f1(n1, d1);
	f1.Output();
    Fraction f2 = f1.Reciprocal();
	f2.Output();
    //  - Take in the first fraction from the command line. 
    //    Find the reciprocal of this fraction and print it to the screen.
    //  - The second fraction will be created with default values. You
    //    should also print this to the screen.
    //  - Then you will attempt to create a fraction with a denominator
    //    of zero, which should print an error

    return 0;
}
