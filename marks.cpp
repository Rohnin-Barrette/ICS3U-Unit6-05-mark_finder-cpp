// Copyright (c) 2021 St. Mother Teresa HS All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// This program finds the average of marks

#include <iostream>
#include <list>

float average_finder(std::list<float> &marks) {
    float total = 0;
    int single_element;
    float average;

    for (auto single_element : marks) {
        total += single_element;
    }
    average = total / marks.size();

    return average;
}

int main() {
       // thin function gets marks

    std::list<float> marks;
    std::string tempnumber = "";
    std::list<std::string> reversedWords;
    float average;
    float temp_int;
    // input
    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;


    while (tempnumber != "-1") {
        try {
            std::cout << "What is your mark as (a %): ";
            std::cin >> tempnumber;
            temp_int = stof(tempnumber);
            if (temp_int <= 100 & temp_int >= 0) {
                marks.push_back(temp_int);
            } else if (temp_int == -1) {
                average = average_finder(marks);
                std::cout << "\nThe average is " << average << "%" << std::endl;
                break;
            } else {
                std::cout << "Invalid Input" << std::endl;
                continue;
        }
        } catch (std::invalid_argument) {
            std::cout << "invalid input" << std::endl;
            continue;
        }
    }

    std::cout << "\nDone." << std::endl;
}
