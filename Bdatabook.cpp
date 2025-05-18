#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

int main() {
    ifstream inputFile("bookData.txt");
    ofstream outputFile("max.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening input file: bookData.txt" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cerr << "Error opening output file: max.txt" << endl;
        inputFile.close();
        return 1;
    }

    string line;
    string courseWithMaxBooks;
    int maxBooks = numeric_limits<int>::min();

    while (getline(inputFile, line)) {
        stringstream ss(line);
        string courseName;
        string numberOfBooksStr;

        getline(ss, courseName, '-');
        getline(ss, numberOfBooksStr);

        try {
            int numberOfBooks = stoi(numberOfBooksStr);
            if (numberOfBooks > maxBooks) {
                maxBooks = numberOfBooks;
                courseWithMaxBooks = courseName;
            }
        } catch (const std::invalid_argument& e) {
            cerr << "Warning: Invalid number of books found in line: " << line << endl;
        } catch (const std::out_of_range& e) {
            cerr << "Warning: Number of books out of range in line: " << line << endl;
        }
    }

    inputFile.close();

    if (!courseWithMaxBooks.empty()) {
        outputFile << courseWithMaxBooks << "-" << maxBooks << endl;
    }

    outputFile.close();

    return 0;
}
