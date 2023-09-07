//
//  main.cpp
//  P3.3
//
//  Created by Tyler Bond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void) {
    
    // Declaration of variables
    int eggs;
    int leftoverEggs;
    int dozens;
    
    // Prompt the user to input # of eggs
    cout <<  "Enter number of eggs laid overnight: ";
    cin >> eggs;
    
    // Calculate the dozens that can be sold
    dozens = eggs / 12;
    
    // Calculate the remaining eggs
    leftoverEggs = eggs % 12;
    
    // Display information
    cout <<  "Number of dozens to sell: " << dozens << endl;
    cout <<  "Number of leftover eggs: " << leftoverEggs;
    
    cin.ignore();
    cin.get();
}
