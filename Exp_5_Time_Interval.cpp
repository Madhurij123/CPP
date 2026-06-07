#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter number of intervals: ";
cin >> n;

int start[n], end[n];

cout << "Enter start times:\n";
for (int i = 0; i < n; i++)
cin >> start[i];

cout << "Enter end times:\n";
for (int i = 0; i < n; i++)
cin >> end[i];
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
if (end[j] > end[j + 1]) {
swap(end[j], end[j + 1]);
swap(start[j], start[j + 1]);
}
}
}
cout << "\nSelected intervals:\n";
cout << "(" << start[0] << ", " << end[0] << ")\n";
int lastEnd = end[0];

for (int i = 1; i < n; i++) {
if (start[i] >= lastEnd) {
cout << "(" << start[i] << ", " << end[i] << ")\n";
lastEnd = end[i];
}
}
return 0;
}
