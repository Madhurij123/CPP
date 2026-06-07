#include <iostream>
using namespace std;
struct Job {
string name;
int resource;
int profit;
};
void sortJobs(Job jobs[], int n) {
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
double r1 = (double)jobs[j].profit / jobs[j].resource;
double r2 = (double)jobs[j + 1].profit / jobs[j + 1].resource;
if (r1 < r2) {
Job temp = jobs[j];
jobs[j] = jobs[j + 1];
jobs[j + 1] = temp;
} } }}
int main() {
int n, totalResource;
cout << "Enter number of jobs: ";
cin >> n;
Job jobs[100];
cout << "Enter job name, resource required, and profit:\n";
for (int i = 0; i < n; i++) {
cin >> jobs[i].name >> jobs[i].resource >> jobs[i].profit;
}
cout << "Enter total available resources: ";
cin >> totalResource;
sortJobs(jobs, n);
int usedResource = 0;

int totalProfit = 0;
string selectedJobs[100];
int count = 0;
for (int i = 0; i < n; i++) {
if (usedResource + jobs[i].resource <= totalResource) {
usedResource += jobs[i].resource;
totalProfit += jobs[i].profit;
selectedJobs[count++] = jobs[i].name;
}}
cout << "\nAllocated Jobs: ";
for (int i = 0; i < count; i++) {
cout << selectedJobs[i] << " ";
}
cout << "\nTotal Profit: " << totalProfit << endl;
return 0;
}
