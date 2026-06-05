#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// ---------- PROBLEM 1 & 2: FILE HANDLING ----------
void fileOperations() {
    ofstream outFile("students.txt");
    
    if (!outFile) {
        cout << "Error opening file for writing!\n";
        return;
    }

    outFile << "101 Rahul 85\n";
    outFile << "102 Sneha 90\n";
    outFile << "103 Amit 78\n";
    outFile.close();

    cout << "Data written to file successfully.\n";

    ifstream inFile("students.txt");

    if (!inFile) {
        cout << "Error opening file for reading!\n";
        return;
    }

    cout << "\nFile Contents:\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

// ---------- PROBLEM 3: VECTOR ----------
void vectorOperations() {
    ifstream file("numbers.txt");

    if (!file) {
        cout << "Error opening numbers.txt!\n";
        return;
    }

    vector<int> v;
    int num;

    while (file >> num) {
        v.push_back(num);
    }

    if (v.empty()) {
        cout << "No data in file.\n";
        return;
    }

    int sum = 0;
    for (int x : v)
        sum += x;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float)sum / v.size() << endl;

    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;

    sort(v.begin(), v.end());

    cout << "Sorted Data: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

// ---------- PROBLEM 4: MAP & SET ----------
void mapSetOperations() {
    map<int, int> studentMarks;
    set<string> uniqueWords;

    // Map operations
    studentMarks[101] = 85;
    studentMarks[102] = 90;
    studentMarks[103] = 78;

    cout << "\nStudent Marks (Map):\n";
    for (auto it : studentMarks)
        cout << "ID: " << it.first << " Marks: " << it.second << endl;

    // Search
    if (studentMarks.find(102) != studentMarks.end())
        cout << "Student 102 found.\n";

    // Delete
    studentMarks.erase(103);

    cout << "After deletion:\n";
    for (auto it : studentMarks)
        cout << it.first << " -> " << it.second << endl;

    // Set operations
    uniqueWords.insert("C++");
    uniqueWords.insert("STL");
    uniqueWords.insert("File");
    uniqueWords.insert("C++"); // duplicate ignored

    cout << "\nUnique Words (Set):\n";
    for (auto word : uniqueWords)
        cout << word << " ";
    cout << endl;
}

// ---------- PROBLEM 5: ITERATORS & ALGORITHMS ----------
void iteratorAlgorithms() {
    vector<int> v = {1, 2, 3, 4, 5, 2, 2};

    cout << "\nVector Elements: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";

    cout << "\nCount of 2: " << count(v.begin(), v.end(), 2) << endl;

    auto pos = find(v.begin(), v.end(), 4);
    if (pos != v.end())
        cout << "Element 4 found.\n";

    cout << "Using for_each: ";
    for_each(v.begin(), v.end(), [](int x) {
        cout << x * 2 << " ";
    });
    cout << endl;

    // Map iterator
    map<int, string> m = {{1, "A"}, {2, "B"}};
    cout << "\nMap Traversal:\n";
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->first << " -> " << it->second << endl;

    // Set iterator
    set<int> s = {5, 1, 3};
    cout << "Set Traversal:\n";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

// ---------- MAIN MENU ----------
int main() {
    int choice;

    do {
        cout << "\n===== FILE HANDLING & STL MENU =====\n";
        cout << "1. Basic File Operations\n";
        cout << "2. File Handling with Exception Checking\n";
        cout << "3. Vector Operations\n";
        cout << "4. Map and Set Operations\n";
        cout << "5. Iterators and Algorithms\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            case 2: // both handled in same function
                fileOperations();
                break;
            case 3:
                vectorOperations();
                break;
            case 4:
                mapSetOperations();
                break;
            case 5:
                iteratorAlgorithms();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
