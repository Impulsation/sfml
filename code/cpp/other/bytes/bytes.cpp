#include <iostream>
using namespace std;

int main()
{
    char input;                 // This will store menu input
    bool gigabytes = false;     // This stores whether gb or mb
    bool bad_input = false;     // This is true if user fails at menu

    // Menu.  Options are 'm' 'g' or 'q'
    while (input != 'q')
    {
        // Gets user input
        cout << "Enter 'm' for megabytes, 'g' for gigabytes, 'q' to quit: ";
        cin >> input;

        // If user enters 'm': gigabytes = false, bad_input = false
        if(input == 'm')
        {
            gigabytes = false;
            bad_input = false;
        }
        
        // If user enters 'g': gigabytes = true, bad_input = false
        else if(input == 'g')
        {
            gigabytes = true;
            bad_input = false;
        }

        // If user enters 'q': program quits
        else if(input == 'q')
        {
            break;
        }

        // If the users anything other than 'm','g', or 'q' bad_input is true
        // and they must try again
        else
        {
            cout << "Try again" << endl;
            bad_input = true;
        }
        
        // The user has entered correctly m or g, bad_input is false
        if(bad_input == false)
        {
            // Get the amount to be downloaded from user
            cout << "Enter the amount to be downloaded: ";
            float amount = 0;
            cin >> amount;

            // If the user entered g earlier convert gb to mb
            if (gigabytes == true)
            {
                amount = amount * 1024;
            }

            // Get the download speed from user
            cout << "Enter the download speed in KBps: ";
            int speed = 0;
            cin >> speed;

            // Convert the mb amount into kb
            amount = amount * 1024;
            
            // Find the amount of time it will take, in minutes
            int minutes = (amount / speed)/60;
            cout << "This file will take " << minutes << " minutes to download." << endl;
        }
    }
    cout << "Goodbye." << endl;
    return 0;
}
