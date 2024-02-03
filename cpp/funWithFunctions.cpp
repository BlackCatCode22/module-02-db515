#include <iostream>

// Function to get an integer from the user
int getAnIntFromTheUser() {
    // Create a space in the computer's memory to store the integer the user types
    int userInt;
    
    // Ask the user to type in an integer
    std::cout << "Enter an integer: ";
    
    // Take what the user typed and save it in the space we created
    std::cin >> userInt;
    
    // Return the integer the user typed
    return userInt;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int num1, int num2) {
    // If num1 is greater than num2, return num1. Otherwise, return num2.
    return (num1 > num2) ? num1 : num2;
}

// Function to sum two integers and return the result
int sumTwoInts(int num1, int num2) {
    // Add num1 and num2 together and return the result
    return num1 + num2;
}

int main() {
    // Get two integers from the user
    int firstInt = getAnIntFromTheUser();
    int secondInt = getAnIntFromTheUser();

    // Compare the two integers and store the larger one
    int largerInt = compareTwoInts(firstInt, secondInt);
    // Display the larger integer to the user
    std::cout << "The larger integer is: " << largerInt << std::endl;

    // Sum the two integers and store the result
    int sumResult = sumTwoInts(firstInt, secondInt);
    // Display the sum of the two integers to the user
    std::cout << "The sum of the two integers is: " << sumResult << std::endl;

    // Tell the computer everything went well
    return 0;
}
