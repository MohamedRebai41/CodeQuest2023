#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the password file
    std::ifstream passwordFile("passwords.txt");

    // Check if the password file is open
    if (!passwordFile.is_open()) {
        std::cerr << "Error opening password file." << std::endl;
        return 1;
    }

    // Open the output file
    std::ofstream outputFile("output.txt");

    // Check if the output file is open
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    // Read the passwords from the password file and generate the output
    std::string line;
    int siteCounter = 1;

    while (std::getline(passwordFile, line)) {
        std::string account = "team" + std::to_string(siteCounter);
        std::string displayName = account;
        std::string password = line;
        std::string permdisplay = "true"; // Assuming permdisplay is always true

        // Generate the output with '\t' as separator
        outputFile << "1\t" << account << "\t" << displayName << "\t" << password << "\t" << permdisplay << std::endl;

        // Increment the siteCounter for the next team
        siteCounter++;
    }

    // Close the files
    passwordFile.close();
    outputFile.close();

    std::cout << "Output generated successfully." << std::endl;

    return 0;
}
