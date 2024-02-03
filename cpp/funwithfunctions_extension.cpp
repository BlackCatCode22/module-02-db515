#include <iostream>
#include <limits> // for numeric_limits

// Function to get an integer from the user, checking for validity
int getAnIntFromTheUser() {
    // Create a space in the computer's memory to store the integer the user types
    int userInt;
    
    // Ask the user to type in an integer
    std::cout << "Enter an integer: ";

    // Check if the input is an integer
    // Keep asking until a valid integer is entered
    while (!(std::cin >> userInt)) {
        // If the input is not an integer, inform the user and ask again
        std::cout << "Invalid input. Please enter an integer: ";
        
        // Clear the error flag to allow for new input
        std::cin.clear();
        
        // Discard invalid input to avoid an infinite loop
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Return the integer the user typed
    return userInt;
}

// Function to find the largest integer among three
int findLargest(int num1, int num2, int num3) {
    // Compare the three integers and return the largest one
    return (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);
}

// Function to subtract two integers
int subtractTwoInts(int num1, int num2) {
    // Subtract num2 from num1 and return the result
    return num1 - num2;
}

// Function to multiply two integers
int multiplyTwoInts(int num1, int num2) {
    // Multiply num1 and num2 together and return the result
    return num1 * num2;
}

int main() {
    // Get three integers from the user
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();
    int num3 = getAnIntFromTheUser();

    // Find the largest integer among the three
    int largest = findLargest(num1, num2, num3);

    // Display the largest integer to the user
    std::cout << "The largest integer is: " << largest << std::endl;

    // Subtract and multiply two of the integers
    int resultSubtraction = subtractTwoInts(num1, num2);
    int resultMultiplication = multiplyTwoInts(num2, num3);

    // Display the results of subtraction and multiplication to the user
    std::cout << "Result of subtraction: " << resultSubtraction << std::endl;
    std::cout << "Result of multiplication: " << resultMultiplication << std::endl;

    // Tell the computer everything went well
    return 0;
}
