//program that simulates rolling of two dice
#include<iostream>
#include<iomanip>
#include<array>
#include<ctime>
#include<random>
using namespace std;

int main(){
    //random number engine class that initialize seed once
    default_random_engine engine(static_cast<unsigned int> (time(0)));
    //uniform_int_distribution class produces integers in range 1 to 6
    uniform_int_distribution<unsigned int> randomInt(1,6);
    //declare constant size
    const size_t arraySize = 13;
    //array expected contains counts for each time sum occurs in 36 rolls
    array<unsigned int, arraySize> expected = { 0,0,1,2,3,4,5,6,5,4,3,2,1};
    //first dice
    unsigned int a;
    //second dice
    unsigned int b;
    array<unsigned int, arraySize> sum{};
    const unsigned long dRoll = 36000;
    //dice rolled 36,000 times
    for(unsigned int i = 1; i <= dRoll; ++i){
        //call built-in function to generate random nums between 1 and 6
        a = randomInt(engine);
        b = randomInt(engine);
        //store the sum of two dices in array sum
        ++sum[a + b];
    }
        //display labeled information
        cout << setw(10) << "Sum" << setw(10) << "Total" <<setw(10) << "Expected"
        << setw(10) << "Actual\n" << fixed << showpoint;
        //display results of rolling dice
        for(size_t j = 2; j < expected.size(); ++j)
        cout << setw(10) << j << setw(10) << sum[j] << setprecision(3) << setw(9)
        << 100.0 * expected[j] / 36 << "%" << setprecision(3)<< setw(9)<<
        100 * sum[j] / dRoll << "%\n";

    }
