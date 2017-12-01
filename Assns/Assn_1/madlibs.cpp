//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment 1 /hello.cpp 
/// @brief Assignment/Lab 1 for CS 10 <winter 2013>
///
/// @author Jorge Gonzalez [jgonz096@ucr.edu]
/// @date 01/13/2014
///
/// @par Enrollment Notes 
///     Lecture Section: 001
/// @par
///     Lab Section: 001
/// @par
///     TA: Ildar Absalyamov
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;
int main()
{
    string object1, thing, adj, verb, name, thing1, disease, verb1, verb2;
    string monster, adj1;
    string measuringStick(80, '-');
    cout << "Please enter an object: ";
    cin >> object1;
    cout << "\nPlease enter an adjective: ";
    cin >> adj;
    cout << "\nPlease enter a verb: ";
    cin >> verb;
    cout << "\nPlease enter a name: ";
    cin >> name;
    cout << "\nPlease enter a thing: ";
    cin >> thing1;
    cout << "\nPlease enter a disease: ";
    cin >> disease;
    cout << "\nPlease enter another verb: ";
    cin >> verb1;
    cout << "\nPlease enter another verb: ";
    cin >> verb2;
    cout << "\nPlease enter a monster: ";
    cin >> monster;
    cout << "\nPlease enter another adjective: ";
    cin >> adj1;
    cout << endl;
    
    cout << measuringStick << endl; //beginning of story
    cout << "Once upon a time, in a " << object1 << " far, far away, there ";
    cout << "lived a " << thing << ". It was very \n" << adj << " and didn't ";
    cout << "like to " << verb << ". It was named " << name << ".\n\n";
    
    cout << name << "'s dream was to be a " << thing1 << ", but he couldn't ";
    cout << "because he had \n" << disease << ". So he decided to solve his ";
    cout << "problem by " << verb1 << ". Miracuously, \nit actually worked!\n";
    cout << endl;
    
    cout << "This goes to show that anyone can accomplish their dreams if ";
    cout << "they " << verb2 << " \nhard enough. However, one can never be ";
    cout << "too careful or else the " << monster << " \nmight attack the ";
    cout << "dreamer. Only the " << adj1 << " " << monster << " can destroy ";
    cout << "your \ndreams.\n";
    cout << measuringStick << endl;
    
    return 0;
}