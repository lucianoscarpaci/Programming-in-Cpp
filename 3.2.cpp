#include <string>

class Account {
    public:
        //member function that sets account name in the object
        void setName(std::string accountName) {
            name = accountName;
        }

        //member function that gets account name from object
        std::strng getName() const {
            return name;
        }
    private:
        std::string name; //data member containing account holders name
}; //end class account