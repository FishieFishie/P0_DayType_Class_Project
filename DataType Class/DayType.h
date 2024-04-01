#pragma once
// Let's define Daytype.H
#ifndef Daytype_H
#define Daytype_H

// We will include the <string> header to manipulate the strings
#include <string>

class DAYtype {
private:
    // Establish a static array of strings: Sunday (start) ---> Saturday (end) 
    static const std::string days[7];
    // Establish a private variable to store the current day
    std::string day;

public:
    // Constructors
    // Default Constructor
    DAYtype();
    // Constructor with Parameters
    DAYtype(std::string day);

    // Function to set the day
    void SETday(std::string day);

    // Function to print the day
    void PRINTday();

    // Function to return the day
    std::string GETday();

    // Function to return the next day
    std::string NEXTday();

    // Function to return the previous day
    std::string PREVday();
    void ADDdays(int NUMdays);
};

#endif
