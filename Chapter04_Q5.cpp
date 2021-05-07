#include <iostream> 
#include <iomanip>//allows use of "setw" and "setprecision" 
#include <math.h>//alows use of "pow" 
using namespace std;
//function prototypes
void gather_user_input(double& weight, double& height);
void calculate_bmi(double& weight, double& height, double& bmi);
void display_response(double& bmi);

//main function
int main()
{
    //declaring variables
    double userWeight, userHeight, bodyMassIndex;
    //explaining program to user
    cout << "This program calculates your BMI and determines whether ";
    cout << endl;
    cout << "you are underweight, of optimal weight, or overweight.";
    cout << endl << endl;
    //calling functions to perform the necessary tasks
    gather_user_input(userWeight, userHeight);
    calculate_bmi(userWeight, userHeight, bodyMassIndex);
    display_response(bodyMassIndex);

    cout << endl << endl;

    return 0;
}
//modular function to gather user input
void gather_user_input(double& weight, double& height)
{
    cout << setw(38) << "Please enter your weight in lbs. ";
    cin >> weight;
    cout << setw(38) << "Please enter your height in inches. ";
    cin >> height;
    cout << endl << endl;
}
//modular function to calculate bmi from user input given
void calculate_bmi(double& weight, double& height, double& bmi)
{
    bmi = (weight * 703) / pow(height, 2);
}
//displaying message and results depending on what the results are
void display_response(double& bmi)
{
    if (bmi < 18.5)
        {
            cout << "Your BMI is " << setprecision(2) << fixed << bmi;
            cout << ", you are considered underweight.";
            cout << endl;
            cout << "Make sure you're eating at least three meals a day ";
            cout << endl << "to maintain a healthy weight!";
        }
    else if (bmi > 18.5 && bmi < 25)
        {
            cout << "Your BMI is " << setprecision(2) << fixed << bmi;
            cout << ", you are considered to be of optimal weight.";
            cout << endl;
            cout << "Keep up the good work!";
        }
    else if (bmi > 25)
        {
            cout << "Your BMI is " << setprecision(2) << fixed << bmi;
            cout << ", you are considered overweight.";
            cout << endl;
            cout << "Try monitoring your caloric intake and increasing your levels ";
            cout << endl << "of exercise if you'd like to achieve optimal weight!";
        }
}