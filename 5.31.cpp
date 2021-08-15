#include<iostream>
using namespace std;

class DollarAmount{
    public:
    explicit DollarAmount{int64_t value}:amount{value}{}

    //function to add amounts
    void add(DollarAmount right){
        amount+=right.amount;
    }
    //function to subtract amount
    void subtract(DollarAmount right){
        amount-=right.amount;
    }
    //divide function
    void divide(DollarAmount right){
        amount=100;
        amount=right.amount/amount;
    }
    //function to compute interest
    void addInterest(int rate, int divisor){
        DollarAmount interest{(amount*rate+divisor/2)
        };
        add(interest);
    }

    std::string toString() const{
        std::string dollars{
            std::to_string(amount/100)};
        std::string cents{std::to_string(std::abs(amount%100))};
        return dollars+" and "+cents;
        }
        private:
        int64_t amount{0};
    };

    int main(){
        DollarAmount d2{1};
        d2.addInterest(5000,10);
        cout<<"After adding the interest, the value of dollars and cents is "<<d2.toString();
        return 0;
    }