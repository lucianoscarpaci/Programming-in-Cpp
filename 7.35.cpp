//polling program that allows user to rate five social-consciousness issues from 1 to 10
#include<array>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    //string array to store social consciousness issues
    array <string,5> topics {"Population", "Violence", "Public health",
        "Poverty", "Child labour"};
    //two-dimensional array responses of type int to summarize survey responses
    array <array<int, 10> , 5 > responses { };
    cout << "Please rate each of these social-consciousness issues (1-10):"<<endl;
    char choose { 'y' };
    int rating;
    int number{0};
    int sumMax{0};
    int sum{0};
    int issueMin{0};
    int sumMin{0};
    int issueMax{0};
    //do while loop to continue rating till entered y
    do {
        ++number;
        cout << endl;
        for (int issue { }; issue < 5; ++issue){
            //do while loop to input rating between 1 and 10 for its topic
            do {
                cout << topics[issue] <<": ";
                cin >> rating;
            } while (rating < 1 || rating > 10);
                ++responses[issue][rating - 1];
        }
        cout << "\nContinue with next candidate (y/n): ";
        cin >> choose;
    } while (choose != 'n');
    //display rating labeled number from 1 to 10 in a row
    cout << "\nRating:       ";
    for (int i { 1 }; i <= 10; ++i)
        cout << setw(4) << i;
    cout << "  Average" << endl;
    for (int i { }; i < 64; ++i)
        cout << '-';
    cout << endl;
    sumMin = 10 * number;
    //display five topics down the left side and 10 ratings across the top
    for (int row { }; row < 5; ++row) {
        cout << left << setw(15) << topics[row];
        sum = 0;
        for (int col { }; col < 10; ++col) {
            cout << right << setw(4) << responses[row][col];
            sum += reponses[row][col] * (col + 1);
        }
        if (sum < sumMin) {
            sumMin = sum;
            issueMin = row;
        }
        if (sum > sumMax) {
            sumMax = sum;
            issueMax = row;
        }
        cout << fixed << setprecision(1);
        //display the average of the ratings for the issue
        cout << setw(9) << 1.0 * sum / number << endl;
    }
    //display the issues with the highest and lowest point total
    cout << "\nHighest point total: " << topics[issueMax] << " " << sumMax
    << " points. \nLowest point total: " << topics[issueMin] << " " <<sumMin
    << " points." << endl;

    return 0;

}