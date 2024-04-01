#include <iostream>
#include "Daytype.H"

// The point of the DayType Class project is to establish a class to manipulate a day of a week
// Expectations? To set the day, print the day, return the day, return the next day, return the previous day, and setting the day by adding a certain number of days with the appropriate constructors

int main() {
    // Create a default constructor: day
    DAYtype day1;
    std::cout << "Default Day: ";
    day1.PRINTday();
    // Print the default day: Sunday

    // Display the previous day
    std::cout << "Previous Day: ";
    std::cout << day1.PREVday() << std::endl;
    // Print the previous day: Saturday

    // Display the next day
    std::cout << "Next Day: ";
    std::cout << day1.NEXTday() << std::endl;
    // Print the next day: Monday

    // Create a day constructor with parameters and establish Monday to be the initial day
    DAYtype day2("Monday");
    std::cout << "Initial Day: ";
    day2.PRINTday();
    // Print the new day: Monday

    // Add 3 days to the current day and display the new day value
    day2.ADDdays(3);
    std::cout << "After adding 3 days: ";
    day2.PRINTday();
    // Print three days after Monday: Thursday

    // Similar to ADDdays(3), add 30 days to the current day and display the new day value
    day2.ADDdays(30);
    std::cout << "After adding 30 days: ";
    day2.PRINTday();
    // Print 30 days after Monday: Saturay

    // Similar to ADDdays(3), add 365 days to the current day and display the new day value
    day2.ADDdays(365);
    std::cout << "After adding 365 days: ";
    day2.PRINTday();
    // Print 365 days after Monday: Sunday

    return 0;
}

// Expectations for the Output is listed on the PDF