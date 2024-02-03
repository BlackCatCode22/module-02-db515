#include <iostream>

int main() {
    // Ask the user to type in three whole numbers
    std::cout << "Enter three integers: ";
    
    // Create spaces in the computer's memory to store the three numbers the user types
    int num1, num2, num3;

    // Take what the user typed and save each number in the spaces we created
    std::cin >> num1 >> num2 >> num3;

    // Create a space to store the largest number among the three
    int largest;

    // Check which of the three numbers is the largest using a series of comparisons
    if (num1 >= num2) {
        // If num1 is greater than or equal to num2
        if (num1 >= num3) {
            // If num1 is also greater than or equal to num3, set largest to num1
            largest = num1;
        } else {
            // If num1 is not greater than or equal to num3, set largest to num3
            largest = num3;
        }
    } else {
        // If num1 is not greater than or equal to num2
        if (num2 >= num3) {
            // If num2 is greater than or equal to num3, set largest to num2
            largest = num2;
        } else {
            // If num2 is not greater than or equal to num3, set largest to num3
            largest = num3;
        }
    }

    // Display the result by showing the largest number among the three
    std::cout << "The largest integer is: " << largest << std::endl;

    // Tell the computer everything went well
    return 0;
}
