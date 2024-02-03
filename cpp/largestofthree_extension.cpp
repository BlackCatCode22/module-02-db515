#include <iostream>

int main() {
    // Ask the user to type in three whole numbers
    std::cout << "Enter three integers: ";
    
    // Create spaces in the computer's memory to store the three numbers the user types
    int num1, num2, num3;

    // Take what the user typed and save each number in the spaces we created
    std::cin >> num1 >> num2 >> num3;

    // Create a space to store the largest number among the three using compound test statements
    // If num1 is greater than or equal to num2 AND num1 is greater than or equal to num3, set largest to num1.
    // Otherwise, if num2 is greater than or equal to num1 AND num2 is greater than or equal to num3, set largest to num2.
    // If none of the above conditions are true, set largest to num3.
    int largest = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);

    // Display the result by showing the largest number among the three
    std::cout << "The largest integer is: " << largest << std::endl;

    // Tell the computer everything went well
    return 0;
}
