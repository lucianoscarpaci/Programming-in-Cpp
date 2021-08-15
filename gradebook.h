#include<string>
#include<array>
#include<iostream>
#include<iomanip> //parameter stream manipulators
//GradeBook class defintiion
class GradeBook {
    public:
    //constant number of students who took the test
    static const size_t students{10};
    //constructor initializes courseName and grades
    GradeBook(const std::string& name,
    const std::array<int, students>& gradesArray)
    : courseName{name}, grades{gradesArray} {
    }
    //function to set the course name
    void setCourseName(const std::string& name){
        courseName = name;
    }
    //function to retrieve the course name
    const std::string& getCourseName() const {
        return courseName;
    }
    //display a welcome message to the GradeBook user
    void displayMessage() const {
        //call getCourseName to get the name of gradebook course
        std::cout<<"Welcome to the grade book for\n"
        <<getCourseName()<<"!"<<std::endl;
    }
    //performs operations on the data (none modify data)
    void processGrades() const {
        outputGrades(); //output grades array
    }
    //call function getAverage to calculate average grade
    std::cout << std::setPrecision(2)<<std::fixed;
    std::cout << "\nClass average is "<<getAverage()<<std::endl;
    //call functions getMinimum and getMaximum
    std::cout << "Lowest grade is "<<getMinimum()
    <<"\nHighest grade is "<<getMaximum()<<std::endl;
    //display grade distribution chart
    outputBarChart();
}
//find minimum grade
int getMinimum() const {
    int lowGrade{100};
    //loop through grades array
    for(int grade : grades){
        //if current grade lower than lowGrade
        if(grade < lowGrade){
            lowGrade = grade;
        }
    }
    return lowGrade;
    }
//find the maximum grade
int getMaximum() const {
    int highGrade{0}; //assume highest is 0
    //loop through grades array
    for(int grade : grades){
        //if current grade higher than highGrade
        if(grade > highGrade){
            highGrade = grade;
        }
    }
    return highGrade;

}
//determine average grade for test
double getAverage() const {
    int total{0};

    //sum grades in array
    for(int grade : grades){
        total += grade;
    }

    //return average of the grades
    return static_cast<double>(total) / grades.size();
    //output bar chart displaying grade distribution
    void outputBarChart() const {
        std::cout << "\nGrade distribution: "<<std::endl;
        //stores frequency of grades in each range of 10 
        //init to 0
        const size_t frequencySize{11};
        std::array<unsigned int, frequencySize> frequency{};

        //for each grade, increment the frequency
        for(int grade : grades){
            ++frequency[grade / 10];
        }
        //for each grade frequency , print bar in chart
        for(size_t count{0}; count < frequencySize; ++ count){
            //output the bar labels
            if(0 == count){
                std::cout << " 0-9";
            }
            else if ( 10 == count){
                std::cout << " 100: ";
            }
            else {
                std::cout << count * 10 << "-" << (count * 10) + 9 << ":";
            }
            //print bar of asterisks
            for(unsigned int stars{0}; stars < frequency[count]; ++stars){
                std::cout << "*";
            }

            std::cout << std::endl;
        }
    }
    //output the contents of the grades array
    void outputGrades() const {
        std::cout << "\nThe grades are:\n\n";
        //output ech students grades
        for(size_t student{0}; student < grades.size(); ++student){
            std::cout<<"Student "<<std::setw(2)<<student+1<<": "
            <<std::setw(3)<<grades[student]<<std<<endl;
        }
    }
    private:
        std::string courseName; //course name for the grade book
        std::array<int, students> grades; //array of students grades

};
