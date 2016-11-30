// Zach Brown
// CS201
//2/2/15
#include <iostream>
#include <iomanip>
using namespace std;

double odometerreading(double start, double end)
{
    double milesdriven = end - start;
    return milesdriven;
}

void classB()
{
    int daysRented;
    cout << "Enter the number of days the car was rented: ";
    cin >> daysRented;
    while (daysRented < 1) // Error handeling for entering a negative number
    {
        cout << "Please enter a correct number of days the car was rented ( > 0): ";
        cin >> daysRented;
    }
    cout << "Enter the vehicle's odometer reading at the start of the rental peroid (without ','): ";
    double odometerStart;
    cin >> odometerStart;
    while (odometerStart < 1) // error handleing for entering a negative number
    {
        cout << "Please reenter the vehicle's odometer reading at the start of the rental period ( >= 1): ";
        cin >> odometerStart;
    }
    cout << "Enter the vehicle's odometer reading at the end of the rental period (without ','): ";
    double odometerEnd;
    cin >> odometerEnd;
    while (odometerEnd < 1)// error handleing for entering a negative number
    {
        cout << "Please re-enter the vehicle's odometer reading at the end of the rental period ( >= 1): ";
        cin >> odometerEnd;
    }
    while (odometerStart > odometerEnd) 
    {
        cout << "You have entered less miles for the end odometer reading than the start odometer reading \n Please reeneter the starting odometer reading (without ','): ";
        cin >> odometerStart;
        cout << "Please reenter the vehicle's ending odometer reading(without ','): ";
        cin >> odometerEnd;
    }
    double milesDriven = odometerreading(odometerStart, odometerEnd);
 
    double totalCost = daysRented * 40;
    totalCost += milesDriven * .25;
    cout << "Customer's classification code is: B \n" <<
        "Days rented: " << daysRented << "\n"
        "Odometers starting maleage: " << odometerStart << "\n"
        "Odometers ending maleage: " << odometerEnd << "\n"
        "Miles Driven: " << milesDriven << "\n"
        "Customers Bill: $" << totalCost << "\n";
}

void classD()
{
    int daysRented;
    cout << "Enter the number of days the car was rented : ";
    cin >> daysRented;
    while (daysRented < 1) // Error handeling for entering a negative number
    {
        cout << "Please enter a correct number of days the car was rented ( > 0): ";
        cin >> daysRented;
    }
    cout << "Enter the vehicle's odometer reading at the start of the rental peroid (without ','): ";
    double odometerStart;
    cin >> odometerStart;
    while (odometerStart < 1) // error handleing for entering a negative number
    {
        cout << "Please reenter the vehicle's odometer reading at the start of the rental period ( >= 1): ";
        cin >> odometerStart;
    }
    cout << "Enter the vehicle's odometer reading at the end of the rental period (without ','): ";
    double odometerEnd;
    cin >> odometerEnd;
    while (odometerEnd < 1)// error handleing for entering a negative number
    {
        cout << "Please re-enter the vehicle's odometer reading at the end of the rental period ( >= 1): ";
        cin >> odometerEnd;
    }
    while (odometerStart > odometerEnd)
    {
        cout << "You have entered less miles for the end odometer reading than the start odometer reading \n Please reeneter the starting odometer reading (without ','): ";
        cin >> odometerStart;
        cout << "Please reenter the vehicle's ending odometer reading(without ','): ";
        cin >> odometerEnd;
    }
    double milesDriven = odometerreading(odometerStart, odometerEnd);
    double totalCost = daysRented * 60;
    if (milesDriven > 10)
    {
        double milesG10 = milesDriven - 10;
        totalCost += milesG10 * .25;
    }
    
    cout << "Customer's classification code is: D \n" <<
        "Days rented: " << daysRented << "\n"
        "Odometers starting maleage: " << odometerStart << "\n"
        "Odometers ending maleage: " << odometerEnd << "\n"
        "Miles Driven: " << milesDriven << "\n"
        "Customers Bill: $" << totalCost << "\n";
}


void classW()
{
    int daysRented;
    cout << "Enter the number of days the car was rented: ";
    cin >> daysRented;
    while (daysRented < 1) // Error handeling for entering a negative number
    {
        cout << "Please enter a correct number of days the car was rented ( > 0): ";
        cin >> daysRented;
    }
    cout << "Enter the vehicle's odometer reading at the start of the rental peroid (without ','): ";
    double odometerStart;
    cin >> odometerStart;
    while (odometerStart < 1) // error handleing for entering a negative number
    {
        cout << "Please reenter the vehicle's odometer reading at the start of the rental period ( >= 1): ";
        cin >> odometerStart;
    }
    cout << "Enter the vehicle's odometer reading at the end of the rental period (without ','): ";
    double odometerEnd;
    cin >> odometerEnd;
    while (odometerEnd < 1)// error handleing for entering a negative number
    {
        cout << "Please re-enter the vehicle's odometer reading at the end of the rental period ( >= 1): ";
        cin >> odometerEnd;
    }
    while (odometerStart > odometerEnd)
    {
        cout << "You have entered less miles for the end odometer reading than the start odometer reading \n Please reeneter the starting odometer reading (without ','): ";
        cin >> odometerStart;
        cout << "Please reenter the vehicle's ending odometer reading(without ','): ";
        cin >> odometerEnd;
    }
    double milesDriven = odometerreading(odometerStart, odometerEnd);
   
    double totalCost = daysRented * 27.1428571429; // weekly rate of 190 / 7 for amount per day
    double avgMilesPerWeek = milesDriven / (daysRented/ 7); // finding the avg amoutn of miles per week
    double weeksRented = daysRented / 7; // weeks rented
    if (daysRented < 7 && milesDriven > 150)
    {
        totalCost += daysRented * 2.8571428571;
        double milesCost = milesDriven - 150;
        totalCost += milesCost * .25;
    }
    else if (avgMilesPerWeek > 90 && avgMilesPerWeek <= 150) // rate for > than 90 but < 150
    {
        
        totalCost += weeksRented * 10;
    }
    else if (avgMilesPerWeek > 150) // rate for miles > 150
    {
        totalCost += weeksRented * 20;
        double avgMilesPerWeekG150 = avgMilesPerWeek - 150;
        avgMilesPerWeekG150 = avgMilesPerWeekG150 * weeksRented;
        totalCost += avgMilesPerWeekG150 * .25;

    }
    cout << "Customer's classification code is: W \n" <<
        "Days rented: " << daysRented << "\n"
        "Odometers starting maleage: " << odometerStart << "\n"
        "Odometers ending maleage: " << odometerEnd << "\n"
        "Miles Driven: " << milesDriven << "\n"
        "Customers Bill: $" << totalCost << "\n";
}

int main()
    {
    int t = 1;
    while (t == 1) // while looo to loop the program until the user enters q 
    {
        char classificationCode;
        cout << "Enter the customer's Classification Code (B, D, W or Q to quit): ";
        cin >> classificationCode;
        while (classificationCode != 'B' && classificationCode != 'D' && classificationCode != 'W' && classificationCode != 'b' && classificationCode != 'd' && classificationCode != 'w' && classificationCode != 'q' && classificationCode != 'Q')
        {
            cout << "Please enter B, D, W or Q for the customer's Classification Code: ";
            cin >> classificationCode;
        }
        if (classificationCode == 'B' || classificationCode == 'b')
        {
            classB();
        }
        if (classificationCode == 'D' || classificationCode == 'd')
        {
            classD();
        }
        if (classificationCode == 'W' || classificationCode == 'w')
        {
            classW();
        }
        if (classificationCode == 'q' || classificationCode == 'Q')
        {
            t = 2;
           
            std::exit;
        }
       
    }
    }
