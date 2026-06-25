#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int choice = 0;

    while (choice != 4)
    {
        cout << "\n==============================\n";
        cout << "     Console Utility Hub\n";
        cout << "==============================\n";
        cout << "1. Calculator\n";
        cout << "2. Unit Converter\n";
        cout << "3. Number Guessing Game\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            double num1, num2;
            int operation;

            cout << "\n--- Calculator ---\n";
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            cout << "\nChoose operation:\n";
            cout << "1. Add\n";
            cout << "2. Subtract\n";
            cout << "3. Multiply\n";
            cout << "4. Divide\n";
            cout << "Enter operation: ";
            cin >> operation;

            if (operation == 1)
            {
                cout << "Answer: " << num1 + num2 << endl;
            }
            else if (operation == 2)
            {
                cout << "Answer: " << num1 - num2 << endl;
            }
            else if (operation == 3)
            {
                cout << "Answer: " << num1 * num2 << endl;
            }
            else if (operation == 4)
            {
                if (num2 == 0)
                {
                    cout << "Cannot divide by zero." << endl;
                }
                else
                {
                    cout << "Answer: " << num1 / num2 << endl;
                }
            }
            else
            {
                cout << "Invalid operation." << endl;
            }
        }
        else if (choice == 2)
        {
            int converterChoice = 0;

            while (converterChoice != 4)
            {
                cout << "\n--- Unit Converter ---\n";
                cout << "1. Temperature\n";
                cout << "2. Length\n";
                cout << "3. Weight\n";
                cout << "4. Back\n";
                cout << "Enter your choice: ";
                cin >> converterChoice;

                if (converterChoice == 1)
                {
                    int tempChoice;
                    double temp;

                    cout << "\n1. Celsius to Fahrenheit\n";
                    cout << "2. Fahrenheit to Celsius\n";
                    cout << "Enter your choice: ";
                    cin >> tempChoice;

                    cout << "Enter temperature: ";
                    cin >> temp;

                    if (tempChoice == 1)
                    {
                        cout << "Result: " << (temp * 9 / 5) + 32 << " F" << endl;
                    }
                    else if (tempChoice == 2)
                    {
                        cout << "Result: " << (temp - 32) * 5 / 9 << " C" << endl;
                    }
                    else
                    {
                        cout << "Invalid choice." << endl;
                    }
                }
                else if (converterChoice == 2)
                {
                    int lengthChoice;
                    double length;

                    cout << "\n1. Meters to Feet\n";
                    cout << "2. Feet to Meters\n";
                    cout << "Enter your choice: ";
                    cin >> lengthChoice;

                    cout << "Enter length: ";
                    cin >> length;

                    if (lengthChoice == 1)
                    {
                        cout << "Result: " << length * 3.28084 << " feet" << endl;
                    }
                    else if (lengthChoice == 2)
                    {
                        cout << "Result: " << length / 3.28084 << " meters" << endl;
                    }
                    else
                    {
                        cout << "Invalid choice." << endl;
                    }
                }
                else if (converterChoice == 3)
                {
                    int weightChoice;
                    double weight;

                    cout << "\n1. Kilograms to Pounds\n";
                    cout << "2. Pounds to Kilograms\n";
                    cout << "Enter your choice: ";
                    cin >> weightChoice;

                    cout << "Enter weight: ";
                    cin >> weight;

                    if (weightChoice == 1)
                    {
                        cout << "Result: " << weight * 2.20462 << " pounds" << endl;
                    }
                    else if (weightChoice == 2)
                    {
                        cout << "Result: " << weight / 2.20462 << " kilograms" << endl;
                    }
                    else
                    {
                        cout << "Invalid choice." << endl;
                    }
                }
                else if (converterChoice == 4)
                {
                    cout << "Going back to main menu..." << endl;
                }
                else
                {
                    cout << "Invalid choice." << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int difficulty;
            int maxNumber;
            int guess = 0;
            int tries = 0;

            cout << "\n--- Number Guessing Game ---\n";
            cout << "1. Easy (1 to 10)\n";
            cout << "2. Medium (1 to 50)\n";
            cout << "3. Hard (1 to 100)\n";
            cout << "Choose difficulty: ";
            cin >> difficulty;

            if (difficulty == 1)
            {
                maxNumber = 10;
            }
            else if (difficulty == 2)
            {
                maxNumber = 50;
            }
            else
            {
                maxNumber = 100;
            }

            int secretNumber = rand() % maxNumber + 1;

            cout << "I have chosen a number between 1 and " << maxNumber << "." << endl;

            while (guess != secretNumber)
            {
                cout << "Enter your guess: ";
                cin >> guess;
                tries++;

                if (guess < secretNumber)
                {
                    cout << "Too low!" << endl;
                }
                else if (guess > secretNumber)
                {
                    cout << "Too high!" << endl;
                }
                else
                {
                    cout << "Correct! You guessed it in " << tries << " tries." << endl;
                }
            }
        }
        else if (choice == 4)
        {
            cout << "\nThanks for using the program!" << endl;
        }
        else
        {
            cout << "\nInvalid choice. Try again." << endl;
        }
    }

    return 0;
}
