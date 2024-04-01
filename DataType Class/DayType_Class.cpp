// Include the header file containing the class definition and the basics (<iostream>)
#include "Daytype.H"
#include <iostream>

// Similar to DayType_H.cpp, establish a static array of the week; Sunday (start) ---> Saturday (end) 
const std::string DAYtype::days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

// Default Constructor;
DAYtype::DAYtype() {
    day = "Sunday";
    // Set the default day to Sunday 
}

// Constructor with Parameters; 
DAYtype::DAYtype(std::string d) {
    SETday(d);
    // The SETday function to set the day
}

// Function to set the day;
void DAYtype::SETday(std::string d) {
    day = d;
    // Set the value of the day variable 
}

// Function to print the day; 
void DAYtype::PRINTday() {
    std::cout << day << std::endl;
    // Output the value of the day variable
}

// Function to return the next day
std::string DAYtype::GETday() {
    return day;
    // Return the value of the day variable
}

// Function to return the next day
std::string DAYtype::NEXTday() {
    int idx;
    for (int i = 0; i < 7; ++i) {
        // Establish a loop for the days of the array: Sunday --> Saturday
        if (days[i] == day) {
            // Find the index of the current day
            idx = i;
            break;
        }
    }
    return days[(idx + 1) % 7];
    // Return the next day by cycling through the arrays
}

// Function to return the previous day
std::string DAYtype::PREVday() {
    int idx;
    for (int i = 0; i < 7; ++i) {
        // Same procedure; Establish a loop for the days of the array: Sunday --> Saturday
        if (days[i] == day) {
            // Find the index of the current day
            idx = i;
            break;
        }
    }
    // Reason for % 7: Ensure the new index stays within the bounds of 0 to 6 (Sunday to Saturday); will reset to 0 if needed IF it exceeds to 6 (basically establishing a loop)
    return days[(idx + 6) % 7];
    // Return the previous day by cycling through the arrays
}

// Function to add a certain number of days to the current day
void DAYtype::ADDdays(int NUMdays) {
    int idx;
    for (int i = 0; i < 7; ++i) {
        // Same procedure; Establish a loop for the days of the array: Sunday --> Saturday
        if (days[i] == day) {
            // Find the index of the current day
            idx = i;
            break;
        }
    }
    // Calculate the index of the new day
    idx = (idx + NUMdays) % 7;
    // Handle the negative index if needed; looping back
    if (idx < 0)
        idx += 7;
    day = days[idx];
    // Establish the new day
}