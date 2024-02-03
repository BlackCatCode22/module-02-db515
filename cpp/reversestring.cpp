#include <iostream>
#include <string>

int main() {
    // Ask the user to type in a word or sentence
    std::cout << "Enter a word or sentence: ";
    
    // Create a space in the computer's memory to store what the user types
    std::string userInput;
    
    // Take what the user typed and save it in the space we created
    std::getline(std::cin, userInput);

    // Create a new space to put the characters in the opposite order
    std::string reversedString = "";

    // Go through each letter the user typed, starting from the end
    // and put it in the new space we created
    for (int i = userInput.length() - 1; i >= 0; i--) {
        reversedString += userInput[i];
    }

    // Show the user what they typed but in the opposite order
    std::cout << "Reversed string: " << reversedString << std::endl;

    // Tell the computer everything went well
    return 0;
}
