// Hotel Managment System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	
	int quant;
	int choice;
	//Quantity
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qfish_finger=0, Qshake = 0, Qchicken = 0;
	//food items sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Sfish_finger =0, Sshake = 0, Schicken = 0;
	//Total proce of items
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_fishfinger= 0, Total_shake = 0, Total_chicken = 0;

	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms avalable: ";
	cin >> Qrooms;
	cout << "\n Quantity of pasta : ";
	cin >> Qpasta;
	cout << "\n Quantity of burger : ";
	cin >> Qburger;
	cout << "\n Quantity of fish_finger : ";
	cin >> Qfish_finger;
	cout << "\n Quantity of shake : ";
	cin >> Qshake;
	cout << "\n Quantity of chicken-roll : ";
	cin >> Qchicken;

	m:
	cout << "\n\t\t\t Please from the menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) burger";
	cout << "\n4) fish_finger";
	cout << "\n5) shake";
	cout << "\n6) chicken-roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit";

	cout << "\n\n Please enter your choice";
	cin >> choice;

    switch (choice) {
    case 1:
        // Room booking
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant) {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << " room/rooms have been allocated to you!";
        }
        else {
            cout << "\n\tOnly " << Qrooms - Srooms << " rooms remaining in the hotel ";
        }
        break;

    case 2:
        // Pasta order
        cout << "\n\n Enter Pasta quantity: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant) {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 110;
            cout << "\n\n\t\t" << quant << " pasta is the order!";
        }
        else {
            cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in the hotel ";
        }
        break;

        // Similar cases for other menu options...

    case 7:
        // Display details of sales and collection
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms rented : " << Srooms;
        cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms booked for the day : " << Total_rooms;

        // Display details for other items...

        break;

    case 8:
        // Exit the program
        exit(0);

    default:
        // Invalid choice
        cout << "\n Please select the numbers mentioned above!";
    }

    // Return to the menu
    goto m;

    
    return 0;
}
