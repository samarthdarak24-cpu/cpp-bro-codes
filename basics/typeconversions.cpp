#include <iostream>

/*
type conversion = conversion of one data type to another

    explicit = precede value with new data type `(int) x`
*/

/*  double x = (int) 3.14;
 implicit = automatic
std :: cout << x;
char x = 100
std:: cout << (char)100
return 0;   */

int main(){

    // calculating score
    int correct = 36;
    int possible = 40;
    double score = correct/(double)possible * 100; // add `(double)` to denominator because integer division stay at integers. Add the explicit type conversion (from int to div) so that a percentage can occur
    std::cout << score << '%';

    return 0;
}