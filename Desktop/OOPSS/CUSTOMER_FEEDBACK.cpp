/*Customer Feedback System:

A restaurant wants to implement a feedback system to gather customer reviews efficiently. Write a program to assist the restaurant with the following tasks:

Collect Feedback:

Allow customers to provide feedback on their dining experience. Each feedback should include the customer's name, rating (on a scale of 1 to 5), and comments.
Analyze Feedback:

Implement functionality to analyze the feedback provided by customers. The program should calculate and display the average rating received by the restaurant.
Display Feedback:

Allow the restaurant staff to view the feedback provided by customers. They should be able to see the customer's name, rating, and comments.
Filter Feedback:

Enable the staff to filter feedback based on the rating provided by customers. They should be able to view feedback for ratings above a certain threshold (e.g., 4 stars).
Customer Engagement:

Provide an option for the staff to respond to customer feedback. They should be able to thank customers for positive feedback and address any concerns raised in negative feedback.*/

#include <iostream>
using namespace std;
 
int main() {
    
    string feedBack;
    int count = 0;
    float average = 0;
    int rate[100];
    string name[100];
    int choice;
    int count1 = 0;
    bool exit = true;

    while (exit == true) {
        cout << endl;
        cout << "1. For Feedback of customer, Press 1" << endl;
        cout << "2. For Analyzing feedback, Press 2" << endl;
        cout << "3. For Displaying feedback, Press 3" << endl;
        cout << "4. For Filtering feedback, Press 4" << endl;
        cout << "5. For Customer engagement, Press 5" << endl;
        cout << "6. For exit, press 6" << endl;
        cout << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Give your Feedback, rate us from (1 to 5)" << endl;
            cout << "Enter your name" << endl;
            cin.ignore();
            getline(cin, name[count]);
            cout << "Enter the ratings" << endl;
            cin >> rate[count];
            cout << name[count] << " has rated us " << rate[count] << " stars " << endl;
            average = average + rate[count];
            count++;
        }

        else if (choice == 2) {
            cout << "The average rating received is " << endl;
            cout << "The average rating is : " << average / count << endl;
        }

        else if (choice == 3) {
            
            for (int i = 0; i < count; i++) {
                cout << "The name is -> " << name[i] << " and the rating is : " << rate[i] << endl;
            }

        }

        else if (choice == 4) {
            count1 = 0; //good to write
            for (int i = 0; i < count; i++) {
                if (rate[i] >= 4) {
                    count1 = count1 + 1;
                    cout << i << ". " << rate[i] << endl;
                }
            }
            cout << "The total number of ratings from 4 or above four are : " << count1 << endl;
        }

        else if (choice == 5) {
            cout << "Staff feedback" << endl;

            for (int i = 0; i < count; i++) {
                if (rate[i] >= 4) {
                    cout << "Positive response" << endl;
                    cin.ignore();
                    getline(cin, feedBack);
                   
                }

                else {
                    cout << "Negative response" << endl;
                    cin.ignore();
                    getline(cin, feedBack);
                }
            }

        }

        else if (choice == 6) {
            cout << "Exit" << endl;
            exit = false;  
        }

        else {
            cout << "Invalid choice, enter again" << endl;
        }
    }

    return 0;
}