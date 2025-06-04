//Phone-Word-Generator
// Zambrano, Daniel

#include <iostream>
#include <array>
#include <string>

// Function wordGenerator array of 7 digits
void wordGenerator(const std::array<int, 7>& phone);

int main() {
    //Create a std:array called phoneNumber to hold the phone number
    std::array<int, 7> phoneNumber{}; //Stores 7-digit phoneNumber
    std::string input;
    bool validInput = false;

    //prompt user to enter a phone number
    while (!validInput) {
        std::cout << "\nEnter a valid 7-digit phone number (digits 2-9 only, no 0 or 1) \nIn the form: xxx-xxxx: ";
        std::getline(std::cin, input); //reads input line
        int index = 0;
        validInput = true; //assumes input is valid.

        //Excemption handles for input.
        for (char c : input) {
            if (c == '0' || c == '1') {
                std::cout << "\n Error: Avoid phone numbers that include 0 and/or 1.\n";
                validInput = false;
                break;
            }
            //checks if phone number is longer than 7-digits
            if (c >= '2' && c <= '9') {
                if (index < 7) {
                    phoneNumber[index++] = c - '0'; //converts char to int
                } else {
                    std::cout << "\n Error: Enter a valid 7-digit phone number.\n";
                    validInput = false;
                    break;
                }
            }
        }

        //checks if phone number is shorter than 7-digits
        if (index < 7) {
            std::cout << "\n Error: Enter a valid 7-digit phone number.\n";
            validInput = false;
        }
    }

    //generates & prints
    wordGenerator(phoneNumber);

    return 0;
}

//function to form words based on phone number
void wordGenerator(const std::array<int, 7>& phone) {
    //letters corresponding to each number
    const std::string phoneLetters[10] = {
        "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
    };

    int count{0}; // number of words found

    //Using nested loops generate all possible words using nested loops
    for (size_t i0 = 0; i0 < phoneLetters[phone[0]].size(); ++i0) {
        for (size_t i1 = 0; i1 < phoneLetters[phone[1]].size(); ++i1) {
            for (size_t i2 = 0; i2 < phoneLetters[phone[2]].size(); ++i2) {
                for (size_t i3 = 0; i3 < phoneLetters[phone[3]].size(); ++i3) {
                    for (size_t i4 = 0; i4 < phoneLetters[phone[4]].size(); ++i4) {
                        for (size_t i5 = 0; i5 < phoneLetters[phone[5]].size(); ++i5) {
                            for (size_t i6 = 0; i6 < phoneLetters[phone[6]].size(); ++i6) {
                                // Print the word
                                std::cout << phoneLetters[phone[0]][i0]
                                          << phoneLetters[phone[1]][i1]
                                          << phoneLetters[phone[2]][i2]
                                          << phoneLetters[phone[3]][i3]
                                          << phoneLetters[phone[4]][i4]
                                          << phoneLetters[phone[5]][i5]
                                          << phoneLetters[phone[6]][i6] << " ";

                                count++;

                                //Prints 9 words per row
                                if (count % 9 == 0) {
                                    std::cout << std::endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
